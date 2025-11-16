#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isSafe(vector<vector<int>> &m, int n, int x, int y, vector<vector<int>> &visited) {
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && m[x][y] == 1 && visited[x][y] == 0) {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> &m, int n, int x, int y, string path, vector<string> &ans, vector<vector<int>> &visited) {
    // base case
    if (x == n - 1 && y == n - 1) {
        ans.push_back(path);
        return;
    }
    
    visited[x][y] = 1;

    // Down
    int newx = x + 1;
    int newy = y;
    if (isSafe(m, n, newx, newy, visited)) {
        path.push_back('D');
        solve(m, n, newx, newy, path, ans, visited);
        path.pop_back();
    }

    // Left
    newx = x;
    newy = y - 1;
    if (isSafe(m, n, newx, newy, visited)) {
        path.push_back('L');
        solve(m, n, newx, newy, path, ans, visited);
        path.pop_back();
    }

    // Right
    newx = x;
    newy = y + 1;
    if (isSafe(m, n, newx, newy, visited)) {
        path.push_back('R');
        solve(m, n, newx, newy, path, ans, visited);
        path.pop_back();
    }

    // Up
    newx = x - 1;
    newy = y;
    if (isSafe(m, n, newx, newy, visited)) {
        path.push_back('U');
        solve(m, n, newx, newy, path, ans, visited);
        path.pop_back();
    }

    // backtracking
    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &mat) {
    vector<string> ans;
    int n = mat.size();

    if (mat[0][0] == 0) {
        return ans;
    }

    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited(n, vector<int>(n, 0));
    string path = "";
    solve(mat, n, srcx, srcy, path, ans, visited);

    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    // Input matrix (You can modify this matrix for testing)
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    // Find all paths
    vector<string> result = findPath(mat);

    // Output results
    if (result.empty()) {
        cout << "No path found" << endl;
    } else {
        for(int i=0; i<result.size(); i++) {
            cout<<i+1<<" : "<<result[i]<<endl;
        }
    }

    return 0;
}
