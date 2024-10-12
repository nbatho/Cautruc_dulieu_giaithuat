#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,c;
    cin >> c >> n;
    int w[n+1];
    int dp[n+1][c+1];
    for (int i = 1 ;i<=n;i++) cin >> w[i];
    memset(dp,0,sizeof(dp));
    for (int i = 1 ;i <= n;i++) {
        for (int j = 1 ;j <= c;j++) {
            // ko them
            dp[i][j] = dp[i-1][j];
            // co the dua vao
            if (j >= w[i]) {
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + w[i]);
            }
        }
    }  
    cout << dp[n][c] << endl;
}