//#include <bits/stdc++.h>
#include <iostream>
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
class Queue{
    public:
        Node* front;
        Node* rear;
        Queue(){
            this->front = nullptr;
            this->rear = nullptr;
        }

        // insert
        void push(int data){
            Node* temp = new Node(data);
            if(front == nullptr && rear == nullptr){
                front = temp;
                rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }

        void pop(){
            if(front == nullptr && rear == nullptr)
                return;
            Node* temp = front;
            front = front->next;
            if(front == nullptr)
                rear = nullptr;
            delete temp;
        }

        int getFront(){
            if(front == nullptr && rear == nullptr){
                return -1;
            }
            return front->data;
        }
};
void print(const Queue &q){
    Node* front = q.front;
    if(front == nullptr){
        cout<<"Empty Queue.\n";
        return;
    }
    while(front != nullptr){
        cout<<front->data<<"  ";
        front = front->next;
    }
}
int main() {
    Queue q;
    while(true){
        cout<<"Choose an option below.\n";
        cout<<"----------------------------------\n";
        cout<<"1 ) Print the Queue.\n";
        cout<<"2 ) Push an element.\n";
        cout<<"3 ) Pop an element.\n";
        cout<<"4 ) check top element.\n";
        cout<<"5 ) Exit program.\n";
        cout<<"--------------------------------------\n";
        int choice;
        cout<<"Enter choice : ";
        cin>>choice;

        switch(choice){
            case 1:
                print(q);
                break;
            case 2:
                int data;
                cout<<"Enter data : ";
                cin>>data;
                q.push(data);
                break;
            case 3:
                q.pop();
                break;
            case 4:
                cout<<"Top element : "<<q.getFront()<<endl;
                break;
            case 5:
                exit(0);
            default:
                cout<<"Wrong choice.\n";
        }
    }
    return 0;
}