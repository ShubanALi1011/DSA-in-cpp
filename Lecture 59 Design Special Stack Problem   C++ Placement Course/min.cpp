#include <iostream>
#include <stack>
#include <climits>

using namespace std;

class MinStack {
private:
    stack<long long int> s;
    long long int mini;

public:
    MinStack() {
        mini = LLONG_MAX;
    }

    void push(int val) {
        if (s.empty()) {
            s.push((long long)val);
            mini = val;
        }
        else {
            if (val < mini) {
                long long int curr = 2LL * val - mini;
                s.push(curr);
                mini = val;
            }
            else {
                s.push(val);
            }
        }
    }

    void pop() {
        if (s.empty()) return;

        long long int curr = s.top();
        s.pop();

        if (curr < mini) {
            mini = 2 * mini - curr;
        }
    }

    int top() {
        if (s.empty()) return -1;

        long long int curr = s.top();
        if (curr < mini)
            return (int)mini;
        else
            return (int)curr;
    }

    int getMin() {
        if (s.empty()) return -1;
        return (int)mini;
    }
};

int main() {
    MinStack st;

    st.push(5);
    cout << "Top: " << st.top() << endl;        // Output: 5
    cout << "Min: " << st.getMin() << endl;     // Output: 5

    st.push(3);
    cout << "Top: " << st.top() << endl;        // Output: 3
    cout << "Min: " << st.getMin() << endl;     // Output: 3

    st.push(7);
    cout << "Top: " << st.top() << endl;        // Output: 7
    cout << "Min: " << st.getMin() << endl;     // Output: 3

    st.pop();
    cout << "Top after pop: " << st.top() << endl;  // Output: 3
    cout << "Min after pop: " << st.getMin() << endl; // Output: 3

    st.pop();
    cout << "Top after pop: " << st.top() << endl;  // Output: 5
    cout << "Min after pop: " << st.getMin() << endl; // Output: 5

    return 0;
}
