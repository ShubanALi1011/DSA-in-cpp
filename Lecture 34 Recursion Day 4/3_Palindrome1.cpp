#include<iostream>
using namespace std;
bool checkPalindrome(int i, int j, string &s){
    // base case 
    if(i>j){
        return true ;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return checkPalindrome(i+1,j-1,s);
    }
}
int main(){
    string s = "abba";
    bool isPalindrome = checkPalindrome(0,s.length()-1, s);
    if(isPalindrome){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}