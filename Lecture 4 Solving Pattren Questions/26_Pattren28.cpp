#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    // print spaces
    int i = 1;
    while (i <= n) {
        // Print spaces
        int space = n-i; 
        while (space) { // Correct the condition for printing spaces
            cout << "  "; // Print space
            space--;
        } 
        // print 1st triangle
        int j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        // print 2nd triangle 
        int start = i-1;
        while(start){
            cout<<start<<" ";
            start--;
        }
        cout << endl;  // Move to the next line after printing one row
        i++;
    }

    return 0;
}
