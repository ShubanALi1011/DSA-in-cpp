#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse the queue
queue<int> reverseQueue(queue<int> &q) {
    stack<int> s;
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }

    return q;
}

// Main function
int main() {
    queue<int> q;

    // Example input: add elements to queue
    q.push(7);
    q.push(7);
    q.push(5);
    q.push(6);
    q.push(5);
    q.push(10);

    // Reverse the queue
    queue<int> reversedQ = reverseQueue(q);

    // Print the reversed queue
    cout << "Reversed Queue: ";
    while (!reversedQ.empty()) {
        cout << reversedQ.front() << " ";
        reversedQ.pop();
    }
    cout << endl;

    return 0;
}
