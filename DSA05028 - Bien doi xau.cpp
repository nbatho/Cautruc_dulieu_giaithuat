#include <bits/stdc++.h>
using namespace std;
/*
    dp[i][j] số phép biến đổi ít nhất
    nếu str1[i] = str1[j] -> str1[i-1] thành str2[j-1] 
    => dp[i][j] = dp[i-1][j-1]
    ngược lại
    xóa ký tự str1 thì str1[i-1] thành str2[j] khi đó dp[i][j] = dp[i-1][j] + 1 (+1 do dùng 1 phép xóa)
    chèn ký tự str2 vào sau str1 thì dp[i][j] = dp[i][j-1] + 1
    thay thế ký tự str1 bởi str2 thì dp[i][j] = dp[i-1][j-1] + 1

    công thức truy hồi 
    dp[0,j] = j
    dp[i,0] = i
    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1])) + 1;
    */
void solve() {
    string str1, str2;
    cin >> str1 >> str2;
    int n = str1.size(), m = str2.size();
    int dp[n + 5][m + 5];
    int i, j;

    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;

    for (int i = 1 ;i <= n;i++) {
        for (int j = 1 ;j <= m;j++) {
            if (str1[i - 1] == str2[j - 1]) dp[i][j] = dp[i-1][j-1];
            else {
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j],dp[i][j-1])) + 1;
            }
        }
    }
    cout << dp[n][m];
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}