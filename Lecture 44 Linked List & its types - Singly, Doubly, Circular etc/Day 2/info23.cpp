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
        ~Node(){
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
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
void deleteAtPos(Node* &head, Node* &tail, int pos){
    if(pos == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        if(prev->next == NULL){
            tail = prev;
        }
    }

}
void deleteNode(Node* &head, Node* &tail, int data){
    if(head->data == data){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 1;       
        while(curr->data != data){
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

        if(prev->next == NULL){
            tail = prev;
        }
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
    cout<<"After Deleting Pos 3 : "<<endl;
    deleteAtPos(head,tail,3);
    print(head);
    cout<<"After Deleting 0 : \n";
    deleteNode(head,tail,0);
    print(head);
    cout<<"ERD\n";
    return 0;
}