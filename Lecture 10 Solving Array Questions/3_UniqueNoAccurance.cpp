#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> count(int arr[], int n){
    vector<int> store;
    vector<bool> visited(n, false);  // Step 1: Create a 'visited' array

    for(int i=0; i<n; i++){
        if(visited[i]) continue;  // Step 2: Skip if already counted

        int count = 1;  // Start counting the current element
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;  // If the next element matches, increase count
                visited[j] = true;  // Mark it as 'visited'
            }
        }
        store.push_back(count);  // Store the count of the element
    }
    return store;
}

bool unique(int arr[], int n){
    vector<int> store = count(arr,n);  // Count occurrences
    sort(store.begin(),store.end());   // Sort the counts
    for(int i=1; i<store.size(); i++){
        if(store[i]==store[i-1]){      // If any counts are the same, return false
            return false;
        }
    }
    return true;
}

int main(){
    int arr[10] = {1,1,1,2,2,3,4,4,4,4};  // Test array
    bool check = unique(arr,10);          // Check if occurrences are unique

    if(check){
        cout<<"All Occurrences are unique"<<endl;
    }
    else{
        cout<<"Occurrences are not Unique"<<endl;
    }
    return 0;
}
