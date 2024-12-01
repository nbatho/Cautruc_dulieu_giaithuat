#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n + 5];
    long long dp[n + 5];
    for (int i = 1 ;i <= n;i++) cin >> a[i];
    long long res = INT_MIN;
    for (int i = 1 ;i <= n;i++) {
        dp[i] = a[i];
        for (int j = 1 ;j < i;j++) {
            if (a[i] > a[j])
                dp[i] = max(dp[j] + a[i], dp[i]);        
            
        }
        res = max(res,dp[i]);  
    }
    cout << res;
}
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}