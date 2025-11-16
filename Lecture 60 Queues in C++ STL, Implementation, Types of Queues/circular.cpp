#include <iostream>
using namespace std;

class MyCircularQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size = k;
        arr = new int[size];
        front = rear = -1;
    }

    bool enQueue(int value) {
        if (isFull())
            return false;
        else if (isEmpty())
            front = rear = 0;
        else if (rear == size - 1 && front != 0)
            rear = 0;
        else
            rear++;
        arr[rear] = value;
        return true;
    }

    bool deQueue() {
        if (isEmpty())
            return false;
        arr[front] = -1;
        if (front == rear)
            front = rear = -1;
        else if (front == size - 1)
            front = 0;
        else
            front++;
        return true;
    }

    int Front() {
        if (isEmpty())
            return -1;
        return arr[front];
    }

    int Rear() {
        if (isEmpty())
            return -1;
        return arr[rear];
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return ((rear + 1) % size) == front;
    }
};

int main() {
    MyCircularQueue q(5);

    q.enQueue(10);
    q.enQueue(20);
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50); // This one may fail (full)

    cout << "Front: " << q.Front() << endl;
    cout << "Rear: " << q.Rear() << endl;

    q.deQueue();
    q.deQueue();
    q.enQueue(60);
    q.enQueue(70); // Wrap-around insertion

    cout << "Front: " << q.Front() << endl;
    cout << "Rear: " << q.Rear() << endl;

    cout << (q.isFull() ? "Queue is full" : "Queue is not full") << endl;
    cout << (q.isEmpty() ? "Queue is empty" : "Queue is not empty") << endl;

    return 0;
}
