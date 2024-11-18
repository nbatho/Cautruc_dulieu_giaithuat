#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> adj[1005];
bool visited[1005];
void dfs(int u) {
    visited[u] = true;
    for (auto v: adj[u]) {
        if (!visited[v]) {
            dfs(v);
        }
    }
}
void Solve() {
    cin >> n >> m;
    while(m--) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int q;cin >> q;
    while(q--) {
            int x,y;
            cin >> x >> y;
            memset(visited,false,sizeof(visited));
            dfs(x);
            if (visited[y]) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
    for (int i = 1 ;i <= n;i++) adj[i].clear();
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
    }
    return 0;
}