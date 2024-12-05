#include <bits/stdc++.h>
using namespace std;
int v , e ;
vector <int>  a[1005];
bool vs[1005];
void Init() {
    cin >> v >> e;
    for (int i = 1;i <= v;i++) a[i].clear();
    for (int i = 1;i<=e;i++) {
        int x, y; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
}
void dfs(int u) {
    vs[u] = true;
    for (auto v:a[u]) {
        if (!vs[v]) 
            dfs(v);
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
    // dem so dinh tru 
    for (int i = 1;i<=v;i++) {
        int dem = 0 ; 
        memset(vs,false,sizeof(vs));
        vs[i] = true; // loai bo dinh 
        for (int j = 1;j<=v;j++) {
            if (!vs[j]) {
                dem++;
                dfs(j);
            }
        }
        if (dem > demtplt) {
            cout << i << " ";
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
