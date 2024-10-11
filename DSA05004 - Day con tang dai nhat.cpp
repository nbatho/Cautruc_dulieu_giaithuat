#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int dp[1005],a[1005], ans = 0;
    for (int i = 0 ;i < n;i++) cin >> a[i];
    for (int i = 0 ;i < n;i++) {
        dp[i] = 1;
        for (int j = 0;j<i;j++) {
            if (a[j] < a[i]) {
                dp[i] = max(dp[i],dp[j] +1);
            }
        }
        ans = max(ans,dp[i]);
    }
    cout << ans << endl;
}