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

        // Print stars
        int star = 0;
        while (star < (n - i)) {
            cout << "*";  // Print a star
            star++;
    }
    cout<<endl;
    i++;
    }
    return 0;
}

   