//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class circularQueue{
    private:
        int *arr;
        int front;
        int rear;
        int size;
    public:
        circularQueue(int size){
            this->size = size;
            front = -1;
            rear = -1;
            arr = new int[size];
        }

        void push(int data){
            if(isFull()){
                cout<<"Queue is Full.\n";
                return;
            }
            if(isEmpty())
                front = rear = 0;
            else if(rear == size-1 && front != 0)
                rear = 0;
            else
                rear++;
            arr[rear] = data;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Queue is empty.\n";
                return;
            }
            else if(front == rear)
                front = rear = -1;
            else if(front == size-1)
                front = 0;
            else 
                front++;
        }

        int getFront(){
            if(!isEmpty())
                return arr[front];
            return -1;
        }

        bool isEmpty(){
            if(front == -1 && rear == -1)
                return true;
            return false;
        }

        bool isFull(){
            if( (front == (rear + 1) % size) )
                return true;
            return false;
        }

        int chk(){
            return arr[0];
        }

        void print(){
            if(isEmpty()){
                cout<<"Queue is empty.\n";
                return;
            }
            if(front == rear){
                cout<<arr[front]<<" ";
                return;
            }
            int i = front;
            while(true){
                cout<<arr[i]<<"  ";
                if( i == size-1 && front != 0){
                    i = 0;
                }
                else if(i == rear){
                    break;
                }
                else{
                    i++;
                }
            }
        }
};
int main() {
    circularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Front : "<<q.getFront()<<endl;
    q.pop();
    cout<<"Front : "<<q.getFront()<<endl;
    q.push(60);
    cout<<"First Elemenet : "<<q.chk()<<endl;
    q.print();
    return 0;
}