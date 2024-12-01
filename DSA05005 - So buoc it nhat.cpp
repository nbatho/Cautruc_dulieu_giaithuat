#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[1005] , dp[1005], ans = 0;
    for (int i = 0 ;i < n;i++) cin >> a[i];
    for (int i = 0 ;i < n;i++) {
        dp[i] = 1;
        for (int j = 0;j < i;j++) {
            if (a[i] >= a[j]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << n - ans;
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