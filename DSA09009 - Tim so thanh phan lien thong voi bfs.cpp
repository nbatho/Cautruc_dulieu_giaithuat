#include <bits/stdc++.h>
using namespace std;
int v,e,cnt;
vector <int> a[1005];
bool used[1005] = {false};
void Init() {
    cin >> v >> e;
    for (int i = 1 ;i <= v;i++) a[i].clear();
    for (int i = 1 ;i <= e;i++) {
        int x,y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(used,false,sizeof(used));
    cnt = 0;
}
void bfs(int u) {
    queue <int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()) {
        int top = q.front(); q.pop();
        for (auto i:a[top]) {
            if (!used[i]) {
                q.push(i);
                used[i] = true;
            }
        }
    }
}
void Solve() {
    for (int i = 1 ;i <= v;i++) {
        if (!used[i]) {
            cnt++;
            bfs(i);
        }
    }
    cout << cnt << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Solve();
    }
}