#include <bits/stdc++.h>
using namespace std;
int a[1005], c[1005];
int n,v;
int dp[1005][1005];
int qhd() {
    memset(dp,0,sizeof(dp));
    for (int i = 1 ;i <= n;i++) {
        for (int j = 1 ;j <= v;j++) {
            dp[i][j] = dp[i-1][j];
            if (j >= a[i]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-a[i]] + c[i]);
            }
        }
    }
    return dp[n][v];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> v;
        for (int i = 0 ;i < n;i++) cin >> a[i];
        for (int i = 0 ;i < n;i++) cin >> c[i];
        cout << qhd() << endl;
    }
}