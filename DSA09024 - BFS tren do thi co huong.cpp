#include <bits/stdc++.h>
using namespace std;
int v , e , u;
vector <int> a[1005];
bool visited[1005];
void Init() {
    cin >> v >> e >> u;
    for (int i = 0 ;i < v;i++) a[i].clear();
    for (int i = 0 ;i < e;i++) {
        int x,y; cin >> x >> y;
        a[x].push_back(y);
    }
    memset(visited,false,sizeof(visited));
}
void BFS(int u) {
    queue <int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty()) {
        int top = q.front(); q.pop();
        cout << top << " ";
        for (auto i: a[top]) {
            if (!visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        BFS(u);
        cout << endl;
    }
    return 0;
}