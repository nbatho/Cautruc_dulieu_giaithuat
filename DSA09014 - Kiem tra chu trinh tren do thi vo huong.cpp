#include <bits/stdc++.h>
using namespace std;

int v, e;
bool vs[1005];
vector<int> a[1005];
int parent[1005];

bool dfs(int u, int par) {
    vs[u] = true;
    for (int v : a[u]) {
        if (!vs[v]) {
            if (dfs(v, u)) return true;
        } else if (v != par) {
            return true;
        }
    }
    return false;
}
bool bfs(int u) {
    queue <int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty()) {
        int v = q.front(); q.pop();
        for (int x :a[v]) {
            if (!vs[x]) {
                vs[x] = true;
                q.push(x);
                parent[x] = v;
            }
            else if (x != parent[v]) return true;
        }
    }
    return false;
}
void solve() {
    cin >> v >> e;
    for (int i = 1; i <= v; i++) a[i].clear();
    for (int i = 0; i < e; i++) {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(vs, false, sizeof(vs));
    memset(parent,0,sizeof(parent));
    for (int i = 1; i <= v; i++) {
        if (!vs[i]) {  
            if (bfs(i)) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
