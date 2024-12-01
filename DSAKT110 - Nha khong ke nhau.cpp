#include <bits/stdc++.h>
using namespace std;
/*
    với i > 2 
    nếu dãy chứa a[i - 2] độ dài lớn nhất có thể là dp[i-2] + a[i]
    nếu dp[i-1] dương
    nếu ko chứa thì chỉ có độ dài là dp[i-1]
*/
void solve() {
    int n; cin >> n;
    int a[n+5] ={0};
    int dp[n + 5] = {0};
    for (int i = 1 ;i <= n;i++) {
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = max(a[2],a[1]);
    
    for (int i = 3 ;i <= n;i++) {
        dp[i] = max(dp[i - 1], dp[i-2] + a[i]);
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