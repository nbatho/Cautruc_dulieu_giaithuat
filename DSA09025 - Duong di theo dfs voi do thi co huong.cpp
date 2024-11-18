#include <bits/stdc++.h>
using namespace std;
int v,e,s,t;
vector <int> adj[1005];
bool visited[1005];
int parent[1005];
void dfs(int u) {
    visited[u] = true;
    for (auto v:adj[u]) {
        if (!visited[v]) {
            parent[v] = u;
            dfs(v);
        }
    }
}
void Path(int s, int t) {
    dfs(s);
    if (!visited[t]) {
        cout << -1;
    }
    else {
        vector<int> path;
        while ( s != t) {
            path.push_back(t);
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        for (auto i:path) {
            cout << i << " ";
        }
    }
}
void Solve() {
    cin >> v >> e >> s >> t;
    for (int i = 0 ;i <v;i++) adj[i].clear();
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for (int i = 0 ;i < e;i++) {
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    Path(s,t);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
        cout << endl;
    }
}