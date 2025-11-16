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
class Stack{
    private:
        Node* top;
    public:
        Stack(){
            this->top = nullptr;
        }

        // insert
        void push(int data){
            Node* temp = new Node(data);
            if(top == nullptr){
                top = temp;
                return;
            }
            temp->next = top;
            top = temp;
        }

        void pop(){
            if(top == nullptr)
                return;
            Node* temp = top;
            top = top->next;
            temp->next = nullptr;
            delete temp;
        }

        int gettop(){
            if(top == nullptr){
                return -1;
            }
            return top->data;
        }

        void print(){
            Node*  temp = top;
            while(temp != nullptr){
                cout<<temp->data<<"  ";
                temp = temp->next;
            }
            cout<<endl;
        }
};
int main() {
    Stack s;
    while(true){
        cout<<"Choose an option below.\n";
        cout<<"----------------------------------\n";
        cout<<"1 ) Print the stack.\n";
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
                s.print();
                break;
            case 2:
                int data;
                cout<<"Enter data : ";
                cin>>data;
                s.push(data);
                break;
            case 3:
                s.pop();
                break;
            case 4:
                cout<<"Top element : "<<s.gettop()<<endl;
                break;
            case 5:
                exit(0);
            default:
                cout<<"Wrong choice.\n";
        }
    }
    return 0;
}