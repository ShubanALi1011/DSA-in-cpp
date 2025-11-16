#include<iostream>
using namespace std;

int squareRoot(int n){
    int s = 0 ;
    int e = n ;
    int ans = -1;
    while(s<=e){
        long long int mid = s + (e-s)/2 ;
        long long int square = mid*mid ;
        if(square == n){
            return mid ;
        }
        else if(square < n){
            ans = mid ;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return ans ;
}

double addPoints(int n, int p, int ans0){
    double factor = 1 ;
    double ans ;
    for(int i=0 ; i<p ; i++){
        factor = factor / 10 ;
        for(double j=ans; j*j < n; j=j+factor){
            ans = j ;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number for Square Root : ";
    cin>>n;
    int ans0 = squareRoot(n); // int not include points
    double answer = addPoints(n,5,ans0);
    cout<<"Square Root is : "<<answer<<endl;
    return 0;
}