#include<iostream>
#include<vector>
using namespace std;

int countPrimes(int n) {
    int cnt = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    
    for (int i = 2; i * i <= n; i++) { 
        if (prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                prime[j] = false;
            }
        }
    }
    
    // Count primes
    for (int i = 2; i <= n; i++) {
        if (prime[i]) cnt++;
    }
    
    return cnt;
}

int main() {
    int n;
    cout << "Enter end range (2-n) : ";
    cin >> n;
    int ans = countPrimes(n);
    cout << "Total Primes : " << ans << endl;
    return 0;
}
