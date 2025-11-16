#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    // print spaces
    cout<<endl<<endl<<endl;
    int i = 1;
    while (i <= n) {
        // first triangle
        int k = 1;
        while(k<=n-i+1){
            cout<<k<<" ";
            k++;
        }
        // 2nd triangle
        int star1 = i-1;
        while(star1){
            cout<<"* ";
            star1--;
        }

       // 3rd triangle
        int star2 = i-1;
        while(star2){
            cout<<"* ";
            star2--;
        }
        // 3rd triangle
          int j=n-i+1;
        while(j>0){
            cout<<j<<" ";
            j--;
        } 
        cout << endl;  // Move to the next line after printing one row
        i++;
    }
    cout<<endl<<endl<<endl;
    return 0;
}
