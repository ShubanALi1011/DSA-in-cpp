#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
  public:
    int checkRedundancy(string s) {
        stack<char> St;
        for(int i = 0; i < s.length(); i++) {
            char ch = s[i];
            if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
                St.push(ch);
            }
            else if(ch == ')') {
                bool isRedundant = true;
                while(!St.empty() && St.top() != '(') {
                    char top = St.top();
                    // If an operator is found between parentheses, it's not redundant
                    if(top == '+' || top == '-' || top == '*' || top == '/') {
                        isRedundant = false;
                    }
                    St.pop();
                }

                // Pop the opening '('
                if(!St.empty()) {
                    St.pop();
                }

                if(isRedundant) {
                    return 1; // Redundant bracket found
                }
            }
        }
        return 0; // No redundancy
    }
};

int main() {
    Solution sol;
    string expression;

    cout << "Enter expression: ";
    cin >> expression;

    if(sol.checkRedundancy(expression)) {
        cout << "Redundant brackets found." << endl;
    } else {
        cout << "No redundant brackets." << endl;
    }

    return 0;
}
