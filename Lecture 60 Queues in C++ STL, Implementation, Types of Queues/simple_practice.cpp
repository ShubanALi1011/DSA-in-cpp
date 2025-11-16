//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Queue{
    private:
        int *arr;
        int front;
        int rear;
        int size;
    public:
        Queue(int size){
            this->size = size;
            front = -1;
            rear = -1;
            arr = new int[size];
        }

        // push function
        void push(int data){
            if(isFull()){
                cout<<"Queue is  full.\n";
                return;
            }
            if(front == -1)
                front = 0;
            rear++;
            arr[rear] = data;
        }

        // pop function
        void pop(){
            if(isEmpty()){
                cout<<"Queue is empty.\n";
                return;
            }
            arr[front] = -1;
            front++;

            if(front > rear)
                front = rear = -1;
        }
        // get front
        int getFront(){
            if(!isEmpty())
                return arr[front];
            return -1;
        }

        // is Empty
        bool isEmpty(){
            if(front == -1)
                return true;
            return false;
        }

        // is Full
        bool isFull(){
            if(rear == size-1)
                return true;
            return false;
        }

        void print(){
            if(isEmpty()){
                cout<<"Queue is empty.\n";
                return;
            }
            for(int i = front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};
int main() {
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.print();
    cout<<"Front : "<<q.getFront()<<endl;
    cout<<"----------------------"<<endl;
    cout<<"After pop \n";
    q.pop();
    q.print();
    cout<<"Front : "<<q.getFront()<<endl;
    
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();

    return 0;

}