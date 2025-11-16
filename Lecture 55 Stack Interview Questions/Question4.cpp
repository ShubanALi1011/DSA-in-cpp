#include <iostream>
#include <stack>
using namespace std;

class Solution {
  private:
    void solve(stack<int> &s, int x) {
        // base case
        if(s.empty()) {
            s.push(x);
            return;
        }

        int num = s.top();
        s.pop();

        // Recursive call
        solve(s, x);

        s.push(num);
    }

  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        solve(st, x);
        return st;
    }
};

void printStack(stack<int> st) {
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int x = 0; // Element to insert at bottom

    Solution sol;
    stack<int> result = sol.insertAtBottom(st, x);

    cout << "Stack after inserting " << x << " at the bottom:" << endl;
    printStack(result);

    return 0;
}
