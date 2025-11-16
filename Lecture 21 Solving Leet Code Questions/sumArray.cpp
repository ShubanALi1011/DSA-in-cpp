#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
vector<int> sum(vector<int> &a, vector<int> &b){
    int i = a.size()-1;
    int j = b.size()-1;
    int carry = 0;
    vector<int> ans;

    while(i >=0 && j>=0){
        int val1=a[i];
        int val2=b[j];
        int sum = val1+val2+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    while(j>=0){
        int sum = b[j]+carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    
    }

    return reverse(ans);

}
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,3};
    vector<int> ans = sum(a,b);
    cout<<"Sum is "<<endl;
    print(ans);
    return 0;
}