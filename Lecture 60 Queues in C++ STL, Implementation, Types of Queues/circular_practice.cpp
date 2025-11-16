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
            rear = -1;
            front = -1;
            arr = new int[size];
        }

        void push(int data){
            if(isFull()){
                cout<<"Queue is full.\n";
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

        // pop fun
        void pop(){
            if(isEmpty()){
                cout<<"Queue is empty.\n";
                return;
            }
            if(front == rear)
                front = rear = -1;
            else if(front == size-1)
                front = 0;
            else
                front++;
        }
        // is empty
        bool isEmpty(){
            if(front == -1 && rear == -1)
                return true;
            return false;
        }

        // isfull
        bool isFull(){
            if( (front == (rear + 1) % size) )
                return true;
            return false;
        }

        // getFront
        int getFront(){
            if(!isEmpty())
                return arr[front];
            return -1;
        }

        void chk(){
            cout<<arr[0]<<endl;
        }
        void print(){
            if(isEmpty()){
                cout<<"Queue is empty\n";
                return;
            }
            int i = front;
            while(true){
                cout << arr[i] << " ";
                if(i == rear) break;
                i = (i + 1) % size;
            }
            cout << endl;
        }
};
int main() {
    circularQueue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front : "<<q.getFront()<<endl;
    q.pop();
    cout<<"Front : "<<q.getFront()<<endl;
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.chk();
    q.print();
    return 0;
}
