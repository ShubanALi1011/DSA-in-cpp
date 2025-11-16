#include<iostream>
#include<string>
using namespace std;
char getMaxOccChar(string s){
    int arr[26] = {0};
    // create an array of count of char
    for(int i=0; i<s.length(); i++){
        char ch = s[i];

        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    // find max occ character
    int maxi = -1, ans=0;
    for(int i=0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    return ans + 'a';
}
int main(){
    string str = "test";
    char maxi = getMaxOccChar(str);
    cout<<"String : "<<str<<endl;
    cout<<"Maxi Char : "<<maxi<<endl;
    return 0;
}