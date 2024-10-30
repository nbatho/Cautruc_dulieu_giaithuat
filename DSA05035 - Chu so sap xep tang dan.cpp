#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;
/*
    chinh hop lap 
    C(n,n+k-1)
*/
int dp[300][300];
int qhd(int n, int k) {
    for (int i = 0 ;i <= n;i++) {
            for (int j = 0;j <= i ;j++) {
                if (j == 0 || j == i) dp[i][j] = 1;
                else {
                    dp[i][j] =( dp[i-1][j-1] + dp[i-1][j]) %mod;
                }
            }
        }
    return dp[n][k];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << qhd(10+n-1,n) << endl;
    }
}