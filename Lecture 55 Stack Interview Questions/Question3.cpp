#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++) {
            char ch = s[i];

            // Opening brackets
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            // Closing brackets
            else {
                if(!st.empty()) {
                    char top = st.top();
                    if((ch == ')' && top == '(') || 
                       (ch == '}' && top == '{') || 
                       (ch == ']' && top == '[')) {
                        st.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main() {
    Solution sol;
    string input;

    cout << "Enter a string of brackets: ";
    cin >> input;

    if(sol.isValid(input)) {
        cout << "Valid parentheses!" << endl;
    } else {
        cout << "Invalid parentheses!" << endl;
    }

    return 0;
}
