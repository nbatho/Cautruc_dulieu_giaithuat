#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        long long res =1;
        if (k > n) res = 0;
        else {
            for (int i = n-k+1 ;i <= n;i++) {
                res = (res*i)%mod;
            }
        }
        cout << res << endl;
    }
}