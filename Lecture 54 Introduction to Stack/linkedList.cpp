#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    Node() {
        this->data = 0;
        this->next = NULL;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void display() {
        Node* temp = top;
        cout << "Stack: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();  // Output: Stack: 30 -> 20 -> 10 -> NULL

    cout << "Top element is: " << s.peek() << endl;

    s.pop();
    s.display();  // Output: Stack: 20 -> 10 -> NULL

    s.pop();
    s.pop();
    s.pop();  // Trying to pop when stack is empty

    return 0;
}
