#include <bits/stdc++.h>
using namespace std;
int v , e;
bool vs[1005];
vector <int> a[1005];
vector <int> res;
void dfs(int u) {
    vs[u] = true;
    res.push_back(u);
    for (auto i:a[u]) {
        if (!vs[i]) {
            dfs(i);
        }
    }
}
bool check() {
    for (int i = 1;i<=v;i++) {
        memset(vs,false,sizeof(vs));
        res.clear();
        dfs(i);
        if (res.size() != v) return false;
    }
    return true;
}
void solve() {
    cin >> v >> e;
    for (int i = 1;i<=v;i++) a[i].clear();
    for (int i = 0 ;i < e;i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
    }
    if (check()) cout << "YES";
    else cout << "NO";
}

int main() {
    cin.tie(0); cout.tie(0);
    ios_base::sync_with_stdio(false);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}