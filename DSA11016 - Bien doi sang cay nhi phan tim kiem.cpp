#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    set <int> se;
    while (n--) {        
        int u,v; char x;
        cin >> u >> v >> x;
        se.insert(u);
        se.insert(v);
    }
    for (auto i:se) cout << i << " ";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}