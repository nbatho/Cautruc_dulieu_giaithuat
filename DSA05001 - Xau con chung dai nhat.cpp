#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int qhd(string s1,string s2) {
    memset(dp,0,sizeof(dp));
    int i,j, n = s1.size(), m = s2.size();
    for (i = 1;i<=n;i++) {
        for (j = 1;j <= m;j++) {
            if (s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[n][m];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1 >> s2;
        cout << qhd(s1,s2) << endl;
    }
}