#include <iostream>
#include <stack>
using namespace std;

class Solution {
  private:
    void sortedInsert(stack<int> &s, int num){
        if(s.empty() || s.top() <= num){
            s.push(num);
            return;
        }
        int n = s.top();
        s.pop();
        sortedInsert(s,num);
        s.push(n);

    }

  public:
    void Sort(stack<int> &s){
        // base case
        if(s.empty()){
            return;
        }
        int num = s.top();
        s.pop();
        Sort(s);
        sortedInsert(s,num);
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
    st.push(2);
    st.push(0);
    st.push(1);
    st.push(5);
    st.push(4);

    cout << "Original Stack:\n";
    printStack(st);

    // Reverse the stack
    Solution sol;
    sol.Sort(st);

    cout << "Sorted Stack:\n";
    printStack(st);

    return 0;
}
