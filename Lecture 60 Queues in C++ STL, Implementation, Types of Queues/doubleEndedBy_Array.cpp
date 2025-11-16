#include<iostream>
using namespace std;
class Dequeue{
    private:
        int front;
        int rear;
        int *arr;
        int size;
        int len;
    public:
        Dequeue(int len){
            this->len = len;
            front = rear = -1;
            size = 0;
            arr = new int[len];
        }
        void push_back(int value){
                if(isFull()){
                cout<<"Queue is full.\n";
                return;
            }
            if(isEmpty()){
                front = 0;
            }
            rear++;
            arr[rear] = value;
            size++;
        }
        void push_front(int value){
            if(isFull()){
                cout<<"Queue is full.\n";
                return;
            }
            if(isEmpty()){
                front = rear = 0;
                arr[front] = value;
                size = 1;
                return;
            }

            // shift existing elements to the right
            for(int i = size - 1; i >= 0; i--){
                arr[i + 1] = arr[i];
            }

            arr[0] = value;
            size++;
            rear = size - 1;  // ✔ correct
            front = 0;        // ✔ correct
        }

        void pop_back(){
            if(isEmpty()){
                cout<<"Empty Queue.\n";
                return;
            }
            rear--;
            
            if(front > rear){
                front = rear = -1;
                size = 0;
                return;
            }
            size--;
        }
        void pop_front(){
            if(isEmpty()){
                cout << "Empty Queue.\n";
                return;
            }
            // shift elements left
            for(int i = 0; i < size - 1; i++){
                arr[i] = arr[i + 1];
            }
            size--;
        }
        int getFront(){
            if(!isEmpty())
                return arr[front];
            return -1;
        }

        int getLength(){
            return size;
        }
        bool isEmpty(){
            return front == -1;
        }

        bool isFull(){
            return size == len;
        }

};
void print(Dequeue q){
    while(!q.isEmpty()){
        cout<<q.getFront()<<"  ";
        q.pop_front();
    }
    cout<<endl;
}
int main(){
    Dequeue dq(5);
    int choice, value;

    while(true){
        print(dq);
        cout<<endl;
        cout << "\n===== DEQUEUE MENU =====\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Length\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value: ";
                cin >> value;
                dq.push_front(value);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                dq.push_back(value);
                break;

            case 3:
                dq.pop_front();
                break;

            case 4:
                dq.pop_back();
                break;

            case 5:
                cout<<"Length = "<<dq.getLength()<<endl;
                break;

            case 6:
                cout<<"Exiting...\n";
                return 0;

            default:
                cout<<"Invalid Option.\n";
        }
    }
}