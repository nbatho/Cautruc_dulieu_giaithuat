#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n ;
    queue <pair <int,int>> q;
    unordered_set <int> s;
    q.push({n,0});
    s.insert(n);
    while (!q.empty()) {
        pair <int,int> top = q.front(); q.pop();
        if (top.first == 1) {
            cout << top.second;
            return;
        }
        if (top.first - 1 > 0 && s.find(top.first - 1) == s.end()) {
            q.push({top.first - 1,top.second +1 });
            s.insert(top.first - 1);
        }
        for (int i = 2; i*i<=top.first;i++) {
            if (top.first %i == 0) {
                if (s.find(top.first/i) == s.end()) {
                    q.push({top.first/i, top.second + 1});
                    s.insert(top.first /i);
                }
            }
        }
    }
}
main() {
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}