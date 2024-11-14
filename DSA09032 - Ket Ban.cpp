#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector <bool> used;
int ans = 0;
int cnt = 0; 

void Init() {
    cin >> n >> m;
    adj.assign(n + 1, {});
    used.assign(n + 1, false);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ans = 0; 
}

void DFS(int u) {
    used[u] = true;
    for (auto i : adj[u]) {
        if (!used[i]) {
            cnt++; 
            DFS(i);
        }
    }
    ans = max(ans, cnt); 
}

void Solve() {
    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            cnt = 1;
            DFS(i);      
        }
    }
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Solve();
    }
}
