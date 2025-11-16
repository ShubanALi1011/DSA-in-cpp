#include<string>
#include<iostream>
#include<vector>
using namespace std;
bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
        
    return 0;
}
    
char toLowerCase(char ch) {
    if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
        return ch;
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkPalindrome(string a) {
    int s = 0;
    int e = a.length()-1;

    while(s<=e) {
        if(a[s] != a[e])
        {
            return 0;       
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

bool isPalindrome(string s){
    // faltu char hata do
    string temp = "";
    for(int j=0; j<s.length(); j++){
        if(valid(s[j])){
            temp.push_back(s[j]);
        }
    }

    // Lower case ma krdo
    for(int j=0; j<temp.length(); j++){
        temp[j] = toLowerCase(temp[j]);
    }

    // check palindrome
    return checkPalindrome(temp);
}
int main(){
    string s = "a1@bb1a";
    string v = "M@ad#am%in^n*ew$yo!rk";
    if(isPalindrome(s)){
        cout<<s<<" is a valid palindrome "<<endl;
    }
    else{
        cout<<s<<" is not a valid palindrome "<<endl;
    }
    if(isPalindrome(v)){
        cout<<v<<" is a valid palindrome "<<endl;
    }
    else{
        cout<<v<<" is not a valid palindrome "<<endl;
    }
    return 0;
} 