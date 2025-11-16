#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char> & chars){
    int i=0;
    int ansIndex = 0;
    int n = chars.size();

    while(i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        /* yaha kab aho gy ?
        ya to vector muk gya 
        ya new char a gya 
        */
       // old store krlo
       chars[ansIndex++] = chars[i];
       int count = j - i;  // Fixed the count calculation
       if(count > 1){
        // converting counting into single digits and saving in answer
        string cnt = to_string(count);
        for(char ch : cnt){
            chars[ansIndex++] = ch; // Corrected assignment operator
        }
       }
       i=j;
    }
    return ansIndex;
}

int main(){
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c'};
    int newLength = compress(chars);

    // Printing compressed characters
    for(int i = 0; i < newLength; i++){
        cout << chars[i] << "  ";
    }
    cout<<endl;

    return 0;
}
