#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> s;
        vector<int> ans(n);
        for(int i = n - 1; i >= 0; i--) {
            int curr = arr[i];
            while(!s.empty() && arr[s.top()] >= curr) {
                s.pop();
            }
            if(s.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr) {
        int n = arr.size();
        stack<int> s;
        vector<int> ans(n);
        for(int i = 0; i < n; i++) {
            int curr = arr[i];
            while(!s.empty() && arr[s.top()] >= curr) {
                s.pop();
            }
            if(s.empty()) {
                ans[i] = -1;
            } else {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextSmallerElement(heights);
        vector<int> prev = prevSmallerElement(heights);
        int maxArea = 0;
        for(int i = 0; i < heights.size(); i++) {
            int height = heights[i];
            if(next[i] == -1) {
                next[i] = heights.size();
            }
            int width = next[i] - prev[i] - 1;
            int area = height * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};

int main() {
    int n;
    cout << "Enter number of bars in histogram: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter heights: ";
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    Solution sol;
    int result = sol.largestRectangleArea(heights);

    cout << "Largest Rectangle Area: " << result << endl;

    return 0;
}
