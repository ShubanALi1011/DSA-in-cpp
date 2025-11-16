#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if (gas.empty() || cost.empty())
            return -1;

        int balance = 0;
        int start = 0;
        int deficit = 0;

        for (int i = 0; i < gas.size(); i++) {
            balance += gas[i] - cost[i];
            if (balance < 0) {
                deficit += balance;
                start = i + 1;
                balance = 0;
            }
        }
        if (deficit + balance >= 0)
            return start;
        else
            return -1;
    }
};

int main() {
    int n;
    cout << "Enter number of stations: ";
    cin >> n;

    vector<int> gas(n), cost(n);

    cout << "Enter gas values: ";
    for (int i = 0; i < n; i++) cin >> gas[i];

    cout << "Enter cost values: ";
    for (int i = 0; i < n; i++) cin >> cost[i];

    Solution sol;
    int result = sol.canCompleteCircuit(gas, cost);

    if (result != -1)
        cout << "Start station index: " << result << endl;
    else
        cout << "No possible circuit." << endl;

    return 0;
}
