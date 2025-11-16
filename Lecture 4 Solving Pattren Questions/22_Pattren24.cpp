#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int space = 0;
        while (space < i) {
            cout << " ";  // Print a space
            space++;
        }

        // Print number
        int start = 0;
        while (start < (n - i)) {
            cout << i;  // Print a star
            start++;
    }
    cout<<endl;
    i++;
    }
    return 0;
}

   