#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    long long cnt = 0;
    for (int i = 0 ;i < n- 1;i++) {
        auto it = lower_bound(a.begin() + i + 1, a.end(), k + a[i]);
        cnt += it - a.begin() - (i+1);
    }
    cout << cnt;
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