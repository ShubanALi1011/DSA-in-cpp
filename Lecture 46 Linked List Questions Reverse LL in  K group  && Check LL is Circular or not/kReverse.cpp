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
Node* reverse2(Node* &head, Node* &curr, Node* &prev){
    if(curr == NULL){
        head = prev;
        return head;
    }
    Node* forward = curr->next;
    Node* result = reverse2(head,forward,curr);
    curr->next = prev;
    return result;

}
Node*  reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    return reverse2(prev,curr,forward);
    // while(curr != NULL){
    //     forward = curr->next;
    //     curr->next = prev;
    //     prev = curr;
    //     curr = forward;
    // }
    // return prev;
}
int getLength(Node* head){
    int len=0;
    while(head != NULL){
        head = head->next;
        len++;
    }

    return len;
}
// lenght approach
Node* getMiddleL(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    int len = getLength(head)/2;
    int cnt = 0;
    Node* temp = head;
    while(cnt < len){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
// slow and fast pointers
Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;
        slow = slow->next;
    }
    return slow;

}
Node* kReverse(Node* head, int k){
    // base case
    if(head == NULL){
        return head;
    }
    // chk if remaing nodes are less than k 
    Node* temp = head;
    int cnt=0;
    while(cnt < k && temp != NULL){
        cnt++;
        temp = temp->next;
    }
    if(cnt < k){
        return head;
    }

    // step 1 
    Node* forward = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;
    while(count < k && curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head->next = kReverse(forward,k);
    }
    return prev;
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
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    print(head);
    head = kReverse(head,3);
    cout<<"after reverse by 2 : \n";
    print(head);
    return 0;
}