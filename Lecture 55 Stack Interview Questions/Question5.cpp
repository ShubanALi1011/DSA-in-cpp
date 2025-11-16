#include <iostream>
#include <stack>
using namespace std;

class Solution {
  private:
    void insertAtBottom(stack<int> &s, int n) {
        if(s.empty()) {
            s.push(n);
            return;
        }
        int num = s.top();
        s.pop();
        insertAtBottom(s, n);
        s.push(num);
    }

  public:
    void Reverse(stack<int> &St) {
        if(St.empty()) {
            return;
        }
        int num = St.top();
        St.pop();
        Reverse(St);
        insertAtBottom(St, num);
    }
};

// Utility function to print the stack from top to bottom
void printStack(stack<int> s) {
    cout << "Stack from top to bottom:\n";
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Pushing some elements
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout << "Original Stack:\n";
    printStack(st);

    // Reverse the stack
    Solution sol;
    sol.Reverse(st);

    cout << "Reversed Stack:\n";
    printStack(st);

    return 0;
}
