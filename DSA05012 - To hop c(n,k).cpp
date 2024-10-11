#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
int dp[1005][1005];
int n,k;
/*
    ct pascal Ckn + C(k+1)n = C(k+1)(n+1)
    C0n = Cnn = 1
    Cij == Cnk
*/
int qhd() {
    for (int i = 0 ;i <=1000;i++) {
        for (int j = 0 ;j <=i;j++) {
            if (j == 0 || j == i) dp[i][j] =1;
            else
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) %MOD;
        }
    }
    return dp[n][k];
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << qhd() << endl;
    }
}