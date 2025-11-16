#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int i = 1;
    int start = 1;
    while (i <= n) {
        // Print spaces
        int space = n-i; 
        while (space) { // Correct the condition for printing spaces
            cout << "  "; // Print space
            space--;
        } 
        int j = 1;
        while (j <= i) { // Correct the loop condition to print decreasing number of elements
            cout << start<<" "; // Print the value of start
            start++;
            j++;
        }

        cout << endl;  // Move to the next line after printing one row
        i++;
    }

    return 0;
}
