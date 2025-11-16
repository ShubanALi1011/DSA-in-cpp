#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        // constructor
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
        ~Node(){
            if(this->next != NULL){
                delete next;
                next = NULL;
            }
        }
};
void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail, Node* &head, int data){
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPos(Node* &head, Node* &tail, int pos, int d){
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }
    int cnt = 1;
    Node* temp = head;
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // insert at position
    Node* insert = new Node(d);
    insert->next = temp->next;
    temp->next->prev = insert;
    temp->next = insert;
    insert->prev = temp;

}
int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void deleteNode(int pos, Node* &head, Node* &tail){
    if(pos == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt < pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        if(curr->next != NULL){
            curr->next->prev = prev;
        } else {
            tail = prev;
        }
        curr->next = NULL;
        curr->prev = NULL;
        delete curr;
    }
}
int main() {
    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtHead(head,tail,0);
    insertAtHead(head,tail,-1);
    insertAtTail(tail,head,30);
    cout<<"After Insert At pos 2 ( 50 )\n";
    insertAtPos(head,tail,2,50);
    print(head);
    cout<<"\nLength : "<<getLength(head)<<endl;
    cout<<"After deleting 5nd pos \n";
    deleteNode(5,head,tail);
    print(head);
    return 0;
}