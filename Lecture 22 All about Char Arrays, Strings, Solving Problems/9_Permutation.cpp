/* s1 ki koi b permutation s2 ma ha to true return kro */
#include<iostream>
#include<string>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i=0; i<26; i++){
        if(a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2){
    // calculate count array
    int count1[26] = {0};
    for(int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // traverse s2 string in window of size s1 length and compare

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};
    // running for first window
    while(i < windowSize){
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2)){
        return 1;
    }
    // slide the window over the rest of s2
    while(i < s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;
        
        // Check for equality after each window shift
        if(checkEqual(count1, count2)){
            return 1;
        }
        i++; // increment i to slide the window
    }
    return 0;
}

int main(){
    string str = "eidbaooo";
    string s = "ab";

    if(checkInclusion(s, str)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
