#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
private:
    bool knows(vector<vector<int>>& mat, int n, int a, int b) {
        return mat[a][b] == 1;
    }

public:
    int celebrity(vector<vector<int>>& mat) {
        int n = mat.size();
        stack<int> s;

        // Push all people into the stack
        for (int i = 0; i < n; i++) {
            s.push(i);
        }

        // Find potential celebrity
        while (s.size() > 1) {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();

            if (knows(mat, n, a, b))
                s.push(b);  // a knows b, so a can't be celeb
            else
                s.push(a);  // a doesn't know b, so b can't be celeb
        }

        int candidate = s.top();

        // Verify candidate
        // Check row: candidate doesn't know anyone
        int rowCount = 0;
        bool rowCheck = false;
        for (int i = 0; i < n; i++) {
            if (i != candidate && mat[candidate][i] == 0) {
                rowCount++;
            }
        }
        if (rowCount == n - 1) {
            rowCheck = true;
        }

        // Check column: everyone knows candidate
        int colCount = 0;
        bool colCheck = false;
        for (int i = 0; i < n; i++) {
            if (i != candidate && mat[i][candidate] == 1) {
                colCount++;
            }
        }
        if (colCount == n - 1) {
            colCheck = true;
        }

        if (rowCheck && colCheck)
            return candidate;
        else
            return -1;
    }
};

// Sample main function for testing
int main() {
    vector<vector<int>> mat = {
        {0, 1, 1},
        {0, 0, 1},
        {0, 0, 0}
    };

    Solution obj;
    int result = obj.celebrity(mat);

    if (result == -1)
        cout << "No celebrity found." << endl;
    else
        cout << "Celebrity is at index: " << result << endl;

    return 0;
}
