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
    // create new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail, int data){
    // create new node
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
void insertAtPos(Node* &head, int pos, int data, Node* &tail){
    if(pos==1){
        insertAtHead(head,data);
        return;
    }
    else{
        Node* temp = head;
        int cnt=1;
        while(cnt<pos-1){
            temp = temp->next;
            cnt++;
        }
        if(temp->next == NULL){
            insertAtTail(tail,data);
            return;
        }
        Node* TobeInsert = new Node(data);
        TobeInsert->next = temp->next;
        temp->next = TobeInsert;
        
    }
}
int main() {
    // creating a new node
    Node* node1 = new Node(10);
    Node*  head = node1;
    Node* tail = node1;
    insertAtHead(head,5);
    insertAtHead(head,0);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtPos(head,3,50,tail);
    print(head);
    return 0;
}