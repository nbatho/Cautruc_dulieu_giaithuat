#include <bits/stdc++.h>
using namespace std;
int v , e ;
vector <int>  a[1005];
bool vs[1005];
vector <pair <int,int>> dscanh;
void Init() {
    cin >> v >> e;
    for (int i = 1;i <= v;i++) a[i].clear();
    dscanh.clear();
    for (int i = 1;i<=e;i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
        dscanh.push_back({x,y});
    }
}
void dfs(int u) {
    vs[u] = true;
    for (auto v:a[u]) {
        if (!vs[v]) 
            dfs(v);
        }
}
void dfs2(int u, int s ,int t) {
    vs[u] = true;
    for (int v:a[u]) {
        if (u == s && v == t || u == t && v == s) continue;
        if (!vs[v]) dfs2(v,s,t);
    }
}
void solve() {
    int demtplt = 0;
    memset(vs,false,sizeof(vs));
    // Dem so thanh phan lien thong
    for (int i = 1;i<=v;i++) {
        if (!vs[i]) {
            demtplt++;
            dfs(i);
        }
    }
    for (auto it:dscanh) {
        int x = it.first , y = it.second;
        // loai bo canh x y khoi do thi 
        memset(vs,false,sizeof(vs));
        int dem = 0;
        for (int j = 1;j<=v;j++) {
            if (!vs[j]) {
                dem++;
                dfs2(j,x,y);
            }
        }
        if (dem > demtplt) {
            cout << x << " " << y << " ";
        }
    }
    
}
int main() {
    int t; cin >> t;
    while (t--) {
        Init();
        solve();
        cout << endl;
    }
    return 0;
}
