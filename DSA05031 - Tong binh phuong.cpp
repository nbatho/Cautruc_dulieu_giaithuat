#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    long long dp[n+5];
    for (int i = 0 ;i <=D n;i++) {
        dp[i] = i;
    }
    for (int i = 0 ;i <= n;i++) {
        for (int j = 0 ;j <= sqrt(i);j++) {
            dp[i] = min(dp[i],dp[i - j*j] +1);
        }
    }
    cout << dp[n];
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}