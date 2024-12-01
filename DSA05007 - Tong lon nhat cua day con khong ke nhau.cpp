#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n + 5];
    int dp[n +5] = {0};
    for (int i = 1 ;i <=n;i++) cin >> a[i];
    dp[1] = a[1];
    dp[2] = max(a[1],a[2]);
    for (int i = 3;i<=n;i++) {
        dp[i] = max(dp[i - 1] , dp[i - 2] + a[i]);
    }
    cout << dp[n];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}