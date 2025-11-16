// palindrome = reverse = origional 
// ignore special symbols and spaces also not case sensetive 
#include<iostream>
#include<string>
#include<cctype> // For isalnum()
using namespace std;

char toLower(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool isPalindrome(string str){
    int s = 0;
    int e = str.length() - 1;
    while(s <= e){
        // Ignore non-alphanumeric characters
        while(s < e && !isalnum(str[s])){
            s++;
        }
        while(s < e && !isalnum(str[e])){
            e--;
        }
        if(toLower(str[s]) != toLower(str[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    string s;
    cout << "Enter the string : ";
    getline(cin, s); // Use getline to read the entire input, including special characters
    if(isPalindrome(s)){
        cout << "Palindrome" << endl;
    }
    else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
