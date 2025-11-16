#include <iostream>
using namespace std;

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public:
    MyQueue() {
        front = 0;
        rear = 0;
    }

    void push(int x) {
        if (rear == 100005) {
            cout << "Queue overflow\n";
            return;
        }
        arr[rear] = x;
        rear++;
    }

    int pop() {
        if (front == rear) {
            return -1; // Queue is empty
        }
        int ans = arr[front];
        front++;
        return ans;
    }

    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    MyQueue q;

    // Push elements
    q.push(10);
    q.push(20);
    q.push(30);

    // Pop elements
    cout << "Popped: " << q.pop() << endl; // 10
    cout << "Popped: " << q.pop() << endl; // 20
    cout << "Popped: " << q.pop() << endl; // 30
    cout << "Popped: " << q.pop() << endl; // -1 (empty)

    return 0;
}
