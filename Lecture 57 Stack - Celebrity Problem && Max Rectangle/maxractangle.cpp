#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
private:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);
        for(int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        vector<int> ans(n);
        s.push(-1);
        for(int i = 0; i < n; i++) {
            int curr = arr[i];
            while(s.top() != -1 && arr[s.top()] >= curr) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans; 
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);
        int area = 0;

        for(int i = 0; i < n; i++) {
            int l = heights[i];
            if(next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int newArea = l * b;
            area = max(area, newArea);
        }
        return area;
    }

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if (n == 0) return 0;
        int m = matrix[0].size();
        vector<int> height(m, 0);
        
        for(int j = 0; j < m; j++) {
            height[j] = matrix[0][j] - '0';
        }
        
        int area = largestRectangleArea(height);

        for(int i = 1; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(matrix[i][j] == '1')
                    height[j] += 1;
                else
                    height[j] = 0;
            }
            area = max(area, largestRectangleArea(height));
        }
        return area;
    }
};

// ✅ Main function
int main() {
    Solution sol;

    vector<vector<char>> matrix = {
        {'1','0','1','0','0'},
        {'1','0','1','1','1'},
        {'1','1','1','1','1'},
        {'1','0','0','1','0'}
    };

    int maxRect = sol.maximalRectangle(matrix);
    cout << "Maximum Rectangle Area: " << maxRect << endl;

    return 0;
}
