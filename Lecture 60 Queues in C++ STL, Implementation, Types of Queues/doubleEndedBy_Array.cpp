#include<iostream>
using namespace std;
class Deque {
    private:
        int *arr;
        int front;
        int rear;
        int size;
        int len;
    public:
        Deque(int size) {
            this->size = size;
            arr = new int[size];
            front = rear = -1;
            len = 0;
        }

        // push front 
        void push_front(int value) {
            if(isFull()) {
                cout << "Queue is full" << endl;
                return;
            }
            if(front == -1)
                front = rear = 0; 
            else if(front == 0 && rear != size - 1)
                front = size - 1;
            else
                front--;
            arr[front] = value;
            len++;
        }

        // push back element
        void push_back(int value){
            if(isFull()) {
                cout << "Queue is full" << endl;
                return;
            }

            if(front == -1)
                front = rear = 0;
            else if(rear == size - 1 && front != 0)
                rear = 0;
            else
                rear++;
            arr[rear] = value;
            len++;
        }

        // pop front 
        void pop_front() {
            if (front == -1) {
                cout << "Queue is empty" << endl;
                return;
            }

            if (front == rear)// single element
                front = rear = -1;
            else if(front == size - 1)
                front = 0;
            else 
            front++;
            len--;
        }

        // pop back 
        void pop_back() {
            if (front == -1) {
                cout << "Queue is empty" << endl;
                return;
            }
            if(front == rear)// single element
                front = rear = -1;
            else if(rear == 0)
                rear = size - 1;
            else
                rear--;
            len--;
        }

        // get front 
        int get_front() {
            if (front == -1) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return arr[front];
        }

        // get rear element
        int get_back() {
            if (front == -1) {
                cout << "Queue is empty" << endl;
                return -1;
            }
            return arr[rear];
        }

        //  empty ha ?
        bool isEmpty() {
            return front == -1;
        }

        // full ha ?
        bool isFull() {
            if ((front == 0 && rear == size - 1) || ((rear + 1) % size == front)) {
            return true;
            }
            return false;
        }

        int getLength(){
            if(isEmpty()){
                cout<<"Empty ha queue.\n";
                return 0;
            }
            return len;
        }
};

void print(Deque q){
    while(!q.isEmpty()){
        cout<<q.get_front()<<"  ";
        q.pop_front();
    }
    cout<<endl;
}
int main(){
    Deque dq(5);
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