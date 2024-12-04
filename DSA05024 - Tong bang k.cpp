#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
void solve() {
    int n,k;
    cin >> n >> k;
    long long a[1005];
    for (int i = 1 ;i <= n;i++) cin >> a[i];
    long long dp[1005] ={0};
    dp[0] = 1;
    for (int i = 1;i<=k;i++) {
        for (int j = 1 ;j <= n;j++) {
            if (i >= a[j])
               dp[i] = (dp[i] + dp[i - a[j]]) % MOD;
        }
    }
    cout << dp[k];
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}