#include<iostream>
using namespace std;

class priority_min_queue {
private:
    int *arr;
    int size;
    int capacity;

public:
    priority_min_queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }

    bool empty() { 
        return size == 0; 
    }
    bool full() { 
        return size == capacity; 
    }

    int getSize(){
        return size;
    }

    void Enqueue(int value) {
        if(full()) {
            cout << "Queue is full\n";
            return;
        }
        arr[size] = value;
        size++;
    }

    int Dequeue() {
        if(empty()) {
            cout << "Empty priority queue\n";
            return -1;
        }

        int minIndex = 0;
        for(int i=1; i<size; i++) {
            if(arr[i] < arr[minIndex])
                minIndex = i;
        }

        int priority = arr[minIndex];

        for(int i=minIndex; i<size-1; i++) {
            arr[i] = arr[i+1];
        }
        size--;
        return priority;
    }

    void print() {
        if(empty()) {
            cout << "Queue empty\n";
            return;
        }
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


class priority_max_queue {
private:
    int *arr;
    int size;
    int capacity;

public:
    priority_max_queue(int capacity) {
        this->capacity = capacity;
        arr = new int[capacity];
        size = 0;
    }

    bool empty() { 
        return size == 0; 
    }
    bool full() { 
        return size == capacity; 
    }

    int getSize(){
        return size;
    }

    void Enqueue(int value) {
        if(full()) {
            cout << "Queue is full\n";
            return;
        }
        arr[size] = value;
        size++;
    }

    int Dequeue() {
        if(empty()) {
            cout << "Empty priority queue\n";
            return -1;
        }

        int maxIndex = 0;
        for(int i=1; i<size; i++) {
            if(arr[i] > arr[maxIndex])
                maxIndex = i;
        }

        int priority = arr[maxIndex];

        for(int i=maxIndex; i<size-1; i++) {
            arr[i] = arr[i+1];
        }

        size--;
        return priority;
    }

    void print() {
        if(empty()) {
            cout << "Queue empty\n";
            return;
        }
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    priority_min_queue min(10);
    priority_max_queue max(10);

    while(true){
        cout<<"Choose option below.\n";
        cout<<"********************************\n";
        cout<<" 1 ) Min Priority queue.\n";
        cout<<" 2 ) Max priority queue.\n";
        cout<<" 3 ) Exit.\n";
        cout<<"---------------------------------.\n";
        int choice;
        cout<<"Enter choice : ";
        cin>>choice;

        if(choice == 1){
            while(true){
                cout<<" MIN_PRIORITY_QUEUE  \n";
                cout<<"--------------------------\n";
                min.print();
                cout<<"\nSize = "<<min.getSize()<<endl;
                cout<<"--------------------------\n";
                cout<<"Choose option below.\n";
                cout<<"*********************\n";
                cout<<" 1 ) Enqueue an element.\n";
                cout<<" 2 ) Dequeue an element.\n ";
                cout<<" 3 ) Back to main menu.\n";
                cout<<" 4 ) Exit.\n";
                cout<<"--------------------------\n";
                int choice;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1){
                    int value;
                    cout<<"Enter value : ";
                    cin>>value;
                    min.Enqueue(value);
                }
                else if(choice == 2){
                    int priority = min.Dequeue();
                    cout<<"Priority : "<<priority<<endl;
                    cout<<"deleted element.\n\n";
                }
                else if(choice == 3){
                    break;
                }
                else if(choice == 4){
                    exit(0);
                }
                else{
                    cout<<"Wrong choice.\n\n";
                }

            }
        }
        else if(choice == 2){
            while(true){
                cout<<" MAX_PRIORITY_QUEUE  \n";
                cout<<"--------------------------\n";
                max.print();
                cout<<"\nSize = "<<max.getSize()<<endl;
                cout<<"--------------------------\n";
                cout<<"Choose option below.\n";
                cout<<"*********************\n";
                cout<<" 1 ) Enqueue an element.\n";
                cout<<" 2 ) Dequeue an element.\n ";
                cout<<" 3 ) Back to main menu.\n";
                cout<<" 4 ) Exit.\n";
                cout<<"--------------------------\n";
                int choice;
                cout<<"Enter choice : ";
                cin>>choice;

                if(choice == 1){
                    int value;
                    cout<<"Enter value : ";
                    cin>>value;
                    max.Enqueue(value);
                }
                else if(choice == 2){
                    int priority = max.Dequeue();
                    cout<<"Priority : "<<priority<<endl;
                    cout<<"deleted element.\n\n";
                }
                else if(choice == 3){
                    break;
                }
                else if(choice == 4){
                    exit(0);
                }
                else{
                    cout<<"Wrong choice.\n\n";
                }

            }
        }
        else if(choice == 3){
            exit(0);
        }
        else{
            cout<<"Wrong choice.\n\n";
        }
        
    }
    return 0;
}
