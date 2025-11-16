#include<iostream>
using namespace std;
bool checkPalindrome(int i, string &s){
    // base case 
    if(i>(s.length()-i-1)){
        return true ;
    }
    if(s[i]!=s[(s.length()-i-1)]){
        return false;
    }
    else{
        return checkPalindrome(i+1,s);
    }
}
int main(){
    string s = "abba";
    bool isPalindrome = checkPalindrome(0, s);
    if(isPalindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}