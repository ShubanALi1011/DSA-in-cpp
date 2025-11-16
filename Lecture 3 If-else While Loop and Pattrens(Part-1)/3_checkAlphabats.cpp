// check charactor a-z || A-Z || 0-9
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    if(ch >= 'a' && ch <= 'z'){
        cout<<"Lower Case"<<endl;
    }
    else if(ch >= 'A' && ch <= 'Z'){
        cout<<"Upper Case"<<endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout<<"Numeric Character"<<endl;
    }
    else{
        cout<<"Invalid Character"<<endl;
    }
    return 0;
}