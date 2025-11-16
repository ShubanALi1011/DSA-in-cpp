#include<iostream>
using namespace std;
string removeAdjacentDuplicates(string str){
    string result = "";
    for(int i=0; i<str.length(); i++){
        if(!result.empty() && result.back() == str[i]){
            result.pop_back();
        }
        else{
            result.push_back(str[i]);
        }
    }
    return result;
}
int main(){
    string str = "abbaca";
    string ans = removeAdjacentDuplicates(str);
    cout<<"Or str : "<<str<<endl;
    cout<<"Up str : "<<ans<<endl;
    return 0;
}