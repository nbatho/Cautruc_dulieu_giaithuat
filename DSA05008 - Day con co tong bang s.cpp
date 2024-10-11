#include <bits/stdc++.h>
using namespace std;

bool qhd(int a[],int n,int s) {
    int dp[s+1] = {0},i,j;
    dp[0] = 1;
    for (int i = 0 ;i < n;i++) {
        for (int j = s;j>= a[i];j--) {
            if (dp[j - a[i]]) {
                dp[j] = 1;
            }
        }
    }
    return dp[s];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s;
        cin >> n >> s;
        int a[n];
        for (int i = 0 ;i < n;i++) cin >> a[i];
        if (qhd(a,n,s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}