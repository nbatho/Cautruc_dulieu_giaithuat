#include <bits/stdc++.h>
using namespace std;
int v,e,cnt= 0;;
vector <int> a[1005];
bool used[1005];
void Init() {
    cin >> v >> e;
    for (int i = 1 ;i <= v;i++) a[i].clear();
    for (int i = 1 ;i <= e;i++) {
        int x,y;cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    memset(used,false,sizeof(used));
    cnt=0;
}
void DFS(int u) {
    used[u] = true;
    for (auto i:a[u]) {
        if (!used[i]) {
            DFS(i);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        for (int i = 1;i<=v;i++) {
            if (!used[i]) {
                ++cnt;
                DFS(i);
            }
        }
        cout << cnt << endl;
    }
}