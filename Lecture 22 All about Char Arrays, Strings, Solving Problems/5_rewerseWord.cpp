#include<iostream>
#include<string>
using namespace std;

void reverseWord(string &str, int start, int end){
    while(start<end){
        swap(str[start], str[end]);
            start++;
            end--;
        
    }
}
void reverseEachWord( string &str){
    int start = 0;
    int length = str.length();
    for(int i=0; i<length; i++){
        if(str[i] == ' '){
            reverseWord(str,start,i-1);
            start=i+1;
        }
    }
    reverseWord(str, start, length - 1);

}
int main(){
    string str = "My Name is Alien";
    reverseEachWord(str);
    cout<<str<<endl;
    return 0;
}