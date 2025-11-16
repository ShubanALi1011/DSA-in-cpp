#include<iostream>
using namespace std;
class Stack{
    public:
        // data members
        int *arr;
        int top;
        int size;

        // constructor
        Stack(int size){
            this->size = size;
            top = -1;
            arr = new int[size];
        }

        // Push function
        void push(int element){
            if(size - top > 1){
                top++;
                arr[top] = element;
            }
            else{
                cout<<"Stack Overflow.\n";
            }
        }

        // Pop Function
        void pop(){
            if(top > -1){
                top--;
            }
            else{
                cout<<"Stack Underflow.\n";
            }
        }

        // peek function
        int peek(){
            if(top > -1){
                return arr[top];
            }
            else{
                cout<<"Stack is empty.\n";
                return -1;
            }
        }

        // Empty Function
        bool isEmpty(){
            if(top < 0){
                return true;
            }
            else{
                return false;
            }
        }

        // Size function
        int getSize(){
            return size;
        }

};
int main(){
    Stack s(10);
    if(s.isEmpty()){
        cout<<"Empty ha.\n";
    }
    else{
        cout<<"Empty nhi ha.\n";
    }
    cout << "Top element is: " << s.peek() << endl;
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<s.peek()<<endl;
    s.pop();
    cout << "Top element is: " << s.peek() << endl;
    if(s.isEmpty()){
        cout<<"Empty ha.\n";
    }
    else{
        cout<<"Empty nhi ha.\n";
    }
    cout<<"Size : "<<s.getSize()<<endl;
    return 0;
}