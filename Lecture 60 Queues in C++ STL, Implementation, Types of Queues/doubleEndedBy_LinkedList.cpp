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
class Dequeue{
    public:
        Node* front;
        Node* rear;
    
        Dequeue(){
            this->front = nullptr;
            this->rear = nullptr;
        }

        void push_front(int data){
            Node* temp = new Node(data);
            if(isEmpty()){
                front = rear = temp;
                return;
            }
            temp->next = front;
            front = temp;
        }

        void pop_front(){
            if(isEmpty()){
                cout<<"Empty Queue.\n";
                return;
            }
            Node* temp = front;
            front = front->next;
            delete temp;
            if(front == nullptr)
                front = rear = nullptr;
        }

        void push_back(int data){
            Node* temp = new Node(data);
            if(isEmpty()){
                front = rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }

        void pop_back(){
            if(isEmpty()){
                cout<<"Empty Queue.\n";
                return; 
            }
            if(front == rear){
                delete front;
                front = rear = nullptr;
            }
            else{
                Node* curr = front;
                while(curr->next != rear){
                    curr = curr->next;
                }
                Node* temp = rear;
                rear = curr;
                rear->next = nullptr;
                delete temp;
            }
        }

        bool isEmpty(){
            if(front == nullptr && rear == nullptr)
                return true;
            return false;
        }

        int getLength(){
            if(isEmpty())
                return 0;
            else{
                int cnt = 1;
                Node* curr = front;
                while(curr->next != nullptr){
                    curr = curr->next;
                    cnt++;
                }
                return cnt;
            }
        }

        void print(){
            Node* curr = front;
            while(curr != nullptr){
                cout<<curr->data<<"  ";
                curr = curr->next;
            }
            cout<<endl;
        }
};

void print(Dequeue q){
    while(!q.isEmpty()){
        cout<<q.front->data<<"  ";
        q.pop_front();
    }
    cout<<endl;
}
int main(){
    Dequeue dq;
    int choice, value;

    while(true){
        dq.print();
        cout<<endl;
        cout << "\n===== DEQUEUE MENU =====\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Length\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value: ";
                cin >> value;
                dq.push_front(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                dq.push_back(value);
                break;

            case 3:
                dq.pop_front();
                break;

            case 4:
                dq.pop_back();
                break;

            case 5:
                cout<<"Length = "<<dq.getLength()<<endl;
                break;

            case 6:
                cout<<"Exiting...\n";
                return 0;

            default:
                cout<<"Invalid Option.\n";
        }
    }
}