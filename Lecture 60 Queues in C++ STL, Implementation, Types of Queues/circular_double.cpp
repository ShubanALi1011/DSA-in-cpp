#include <iostream>
using namespace std;

class Dequeue {
private:
    int front;
    int rear;
    int *arr;
    int size;
    int len;

public:
    Dequeue(int len) {
        this->len = len;
        front = -1;
        rear = -1;
        size = 0;
        arr = new int[len];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == len;
    }

    void push_back(int value) {
        if (isFull()) {
            cout << "Queue is full.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % len;
        }
        arr[rear] = value;
        size++;
    }

    void push_front(int value) {
        if (isFull()) {
            cout << "Queue is full.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            front = (front - 1 + len) % len;
        }
        arr[front] = value;
        size++;
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Empty Queue.\n";
            return;
        }
        if (size == 1) {
            front = rear = -1;
        } else {
            rear = (rear - 1 + len) % len;
        }
        size--;
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Empty Queue.\n";
            return;
        }
        if (size == 1) {
            front = rear = -1;
        } else {
            front = (front + 1) % len;
        }
        size--;
    }

    int getFront() {
        if (!isEmpty())
            return arr[front];
        return -1;
    }

    int getRear() {
        if (!isEmpty())
            return arr[rear];
        return -1;
    }

    int getLength() {
        return size;
    }

    void print() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        int i = front;
        for (int cnt = 0; cnt < size; cnt++) {
            cout << arr[i] << "  ";
            i = (i + 1) % len;
        }
        cout << endl;
    }
};

int main() {
    Dequeue dq(5);
    int choice, value;

    while (true) {
        dq.print();
        cout << "\n===== DEQUEUE MENU =====\n";
        cout << "1. Push Front\n";
        cout << "2. Push Back\n";
        cout << "3. Pop Front\n";
        cout << "4. Pop Back\n";
        cout << "5. Length\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
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
                cout << "Length = " << dq.getLength() << endl;
                break;
            case 6:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid Option.\n";
        }
    }
}
