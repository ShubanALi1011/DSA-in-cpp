#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void insertAtHead(Node* &head, int data){
    // creating new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    // creating new node
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head,5);
    insertAtHead(head,0);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,25);
    print(head);
    return 0;
}