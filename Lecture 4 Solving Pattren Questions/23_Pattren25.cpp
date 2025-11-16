#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = n - i;
        while (space > 0) {
            cout << " ";  // Print a space
            space--;
        }

        
        int start = 0;
        while (start < i) {  // This should run 'i' times
            cout << i;  // Print    
            start++;
        }

        cout << endl;  // Move to the next line after printing one row
        i++;
    }

    return 0;
}
