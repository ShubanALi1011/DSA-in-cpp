#include<iostream>
using namespace std;
int main(){
    int fahrenheit;
    cout<<"Enter fahrenheit : ";
    cin>>fahrenheit;
    
    float celsius;
    celsius = ( (fahrenheit-32)*5 ) / 9.0 ;
    cout<<"Fahrenheit : "<<fahrenheit<<endl;
    cout<<"Celsius : "<<celsius<<endl;
    return 0;
}