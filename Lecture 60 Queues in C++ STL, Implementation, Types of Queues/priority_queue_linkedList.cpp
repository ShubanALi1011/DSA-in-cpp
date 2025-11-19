#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class priority_min_queue {
private:
    Node* head;
    Node* tail;
    int size;

public:
    priority_min_queue() {
        this->head = nullptr;
        this->tail = nullptr;
        size = 0;
    }

    bool empty() { 
        return head == nullptr; 
    }

    int getSize(){
        return size;
    }

    void Enqueue(int value) {
        Node* temp = new Node(value);
        if(empty()){
            head = tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    int Dequeue() {
        if(empty()) {
            cout << "Empty priority queue\n";
            return -1;
        }

        // Find min node and its previous node
        Node* minNode = head;
        Node* minPrev = nullptr;

        Node* curr = head;
        Node* prev = nullptr;

        while(curr != nullptr) {
            if(curr->data < minNode->data) {
                minNode = curr;
                minPrev = prev;
            }
            prev = curr;
            curr = curr->next;
        }

        int priority = minNode->data;

        // Remove minNode properly
        if(minNode == head && minNode == tail) {
            head = tail = nullptr;
        }
        else if(minNode == head) {
            head = head->next;
        }
        else if(minNode == tail) {
            tail = minPrev;
            tail->next = nullptr;
        }
        else {
            minPrev->next = minNode->next;
        }

        delete minNode;
        size--;
        return priority;
    }

    void print() {
        if(empty()){
            cout<<"Queue is empty.\n";
            return;
        }
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"  ";
            temp = temp->next;
        }
        cout << endl;
    }
};

class priority_max_queue {
private:
    Node* head;
    Node* tail;
    int size;

public:
    priority_max_queue() {
        this->head = nullptr;
        this->tail = nullptr;
        size = 0;
    }

    bool empty() { 
        return head == nullptr; 
    }

    int getSize(){
        return size;
    }

    void Enqueue(int value) {
        Node* temp = new Node(value);
        if(empty()){
            head = tail = temp;
        } 
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    int Dequeue() {
        if(empty()) {
            cout << "Empty priority queue\n";
            return -1;
        }

        // Find min node and its previous node
        Node* maxNode = head;
        Node* maxPrev = nullptr;

        Node* curr = head;
        Node* prev = nullptr;

        while(curr != nullptr) {
            if(curr->data > maxNode->data) {
                maxNode = curr;
                maxPrev = prev;
            }
            prev = curr;
            curr = curr->next;
        }

        int priority = maxNode->data;

        // Remove minNode properly
        if(maxNode == head && maxNode == tail) {
            head = tail = nullptr;
        }
        else if(maxNode == head) {
            head = head->next;
        }
        else if(maxNode == tail) {
            tail = maxPrev;
            tail->next = nullptr;
        }
        else {
            maxPrev->next = maxNode->next;
        }

        delete maxNode;
        size--;
        return priority;
    }

    void print() {
        if(empty()){
            cout<<"Queue is empty.\n";
            return;
        }
        Node* temp = head;
        while(temp != nullptr){
            cout<<temp->data<<"  ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {

    priority_min_queue min;
    priority_max_queue max;

    while(true){
        cout<<"Choose option below.\n";
        cout<<"********************************\n";
        cout<<" 1 ) Min Priority queue.\n";
        cout<<" 2 ) Max priority queue.\n";
        cout<<" 3 ) Exit.\n";
        cout<<"---------------------------------.\n";
        int choice;
        cout<<"Enter choice : ";
        cin>>choice;

        if(choice == 1){
            while(true){
                cout<<" MIN_PRIORITY_QUEUE  \n";
                cout<<"--------------------------\n";
                min.print();
                cout<<"\nSize = "<<min.getSize()<<endl;
                cout<<"--------------------------\n";
                cout<<"Choose option below.\n";
                cout<<"*********************\n";
                cout<<" 1 ) Enqueue an element.\n";
                cout<<" 2 ) Dequeue an element.\n";
                cout<<" 3 ) Back to main menu.\n";
                cout<<" 4 ) Exit.\n";
                cout<<"--------------------------\n";
                int choice;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1){
                    int value;
                    cout<<"Enter value : ";
                    cin>>value;
                    min.Enqueue(value);
                }
                else if(choice == 2){
                    int priority = min.Dequeue();
                    cout<<"Priority : "<<priority<<endl;
                    cout<<"deleted element.\n\n";
                }
                else if(choice == 3){
                    break;
                }
                else if(choice == 4){
                    exit(0);
                }
                else{
                    cout<<"Wrong choice.\n\n";
                }

            }
        }
        else if(choice == 2){
            while(true){
                cout<<" MAX_PRIORITY_QUEUE  \n";
                cout<<"--------------------------\n";
                max.print();
                cout<<"\nSize = "<<max.getSize()<<endl;
                cout<<"--------------------------\n";
                cout<<"Choose option below.\n";
                cout<<"*********************\n";
                cout<<" 1 ) Enqueue an element.\n";
                cout<<" 2 ) Dequeue an element.\n";
                cout<<" 3 ) Back to main menu.\n";
                cout<<" 4 ) Exit.\n";
                cout<<"--------------------------\n";
                int choice;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1){
                    int value;
                    cout<<"Enter value : ";
                    cin>>value;
                    max.Enqueue(value);
                }
                else if(choice == 2){
                    int priority = max.Dequeue();
                    cout<<"Priority : "<<priority<<endl;
                    cout<<"deleted element.\n\n";
                }
                else if(choice == 3){
                    break;
                }
                else if(choice == 4){
                    exit(0);
                }
                else{
                    cout<<"Wrong choice.\n\n";
                }

            }
        }
        else if(choice == 3){
            exit(0);
        }
        else{
            cout<<"Wrong choice.\n\n";
        }
        
    }
    return 0;
}
