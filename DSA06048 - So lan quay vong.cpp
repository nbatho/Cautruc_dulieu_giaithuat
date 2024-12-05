#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (auto &i : a) cin >> i;

    int ans = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            ans = i;
            break;
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}