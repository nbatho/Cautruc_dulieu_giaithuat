#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n +5 ];
    int dp[n+5] ={};
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[a[i]] = dp[a[i] - 1] + 1; 
        ans = max(ans, dp[a[i]]);
    }
    cout << n - ans;
}