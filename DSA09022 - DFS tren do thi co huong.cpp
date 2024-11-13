#include <bits/stdc++.h>
using namespace std;
int v,e,u;
vector <int> a[1005];
bool visted[1005];
void Init() {
    cin >> v >> e >> u;
    for (int i = 0 ;i < v;i++) a[i].clear();
    for (int i = 0 ;i < e;i++) {
        int x,y;cin >> x >> y;
        a[x].push_back(y);
    }
    memset(visted,false,sizeof(visted));
}
void DFS(int u) {
    cout << u << " ";
    visted[u] = true;
    for (auto i: a[u]) {
        if (!visted[i]) {
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