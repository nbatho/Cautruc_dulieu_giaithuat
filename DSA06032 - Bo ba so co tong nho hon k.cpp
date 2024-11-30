#include <bits/stdc++.h>
using namespace std;

long long pos(vector<long long>& a, int l, int r, long long x) {
    int res = -1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] < x) {
            res = m;  
            l  = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

void solve() {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long limit = k - a[i] - a[j];
            long long idx = pos(a, j + 1, n - 1, limit);
            if (idx != -1) {
                ans += idx - j;
            }
        }
    }

    cout << ans;
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
