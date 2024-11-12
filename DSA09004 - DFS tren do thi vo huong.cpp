#include<bits/stdc++.h>
using namespace std;
int v , e ,u;
vector <int> adj[1005];
bool visited[1005];
void Init() {
    cin >> v >> e >> u;
    for (int i = 1; i <= v; i++) {
        adj[i].clear();
    }
    for (int i = 0 ;i < e ;i++) {
        int x,y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited,false,sizeof(visited));
}
void DFS(int u) {
    cout << u << " ";
    visited[u] = true;
    for (auto i:adj[u]) {
        if (!visited[i]) {
            DFS(i);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        DFS(u);
        cout << endl;
    }
}