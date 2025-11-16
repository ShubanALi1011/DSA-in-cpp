#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

        // constructor
        Node(int data){
            this->data = data;
            this->next = NULL;
        }

        // destructor
        ~Node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
        }
};
void insertNode(Node* &tail, int value, int data){
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non empty 
        // assume value is present 
        Node* curr = tail;
        while(curr->data != value){
            curr = curr->next;
        }
        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* &tail){
    if(tail == NULL){
        cout<<"Empty Linked List.\n";
        return;
    }
    Node* temp = tail;
    do{
        cout<<temp->data<<"  ";
        temp = temp->next;
    }while(temp != tail);
    cout<<endl;
}
void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        cout<<"Empty Linked List.\n";
        return;
    }
    else{
        // non empty list
        // assume present 
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        if(curr == prev){
            tail = NULL;
        }
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main() {
    Node* tail = NULL;
    print(tail);
    insertNode(tail,5,0);
    print(tail);
    insertNode(tail,0,5);
    print(tail);
    insertNode(tail,0,3);
    print(tail);
    insertNode(tail,5,10);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,6,7);
    print(tail);
    cout<<endl;
    cout<<"Deleting 10 : \n";
    deleteNode(tail,10);
    print(tail);
    cout<<"Deleting 0 : \n";
    deleteNode(tail,0);
    print(tail);
    cout<<"Delete 6 : \n";
    deleteNode(tail,6);
    print(tail);
    return 0;
}