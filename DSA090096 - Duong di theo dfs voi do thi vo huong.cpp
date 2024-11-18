#include <bits/stdc++.h>
using namespace std;
int v, e, s , t;
vector <int> adj[1005];
bool visited[1005];
int parent[1005];
void DFS(int u) {
    visited[u] = true;
    for (auto v:adj[u]) {
        if (!visited[v]) {
            // ghi nhan cha cua v la u
            parent[v] = u;
            DFS(v);
        }
    }
}
void Path(int s, int t) {
    DFS(s);
    if (!visited[t]) {
        cout << -1;
    }
    else {
        // Truy vet duong di
        vector <int> path;
        // bat dau tu dinh t
        while (t != s) {
            path.push_back(t);
            // lan nguoc lai
            t = parent[t];
        }
        path.push_back(s);
        reverse(path.begin(),path.end());
        for (int i:path) {
            cout << i << " ";
        }
    }
}
void Solve() {
    cin >> v >> e >> s >> t;
    for (int i = 0; i <= v; i++) {
        adj[i].clear();
    }
    memset(visited,false,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for (int i = 0 ;i < e;i++) {
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
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
    return 0;
}