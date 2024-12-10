#include <bits/stdc++.h>
using namespace std;
int n , m ; 
int a[1005][1005];
bool vs[1005][1005];
vector<pair<int, int>> d = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
void dfs(int i, int j) {
    vs[i][j] = true;
    for (int k = 0 ;k < d.size();k++) {
        int i1 = i + d[k].first;
        int j1 = j + d[k].second;
        if (i1 >= 1 && i1 <=n && j1 >=1 && j1 <=m && a[i1][j1] && !vs[i1][j1]) {
            dfs(i1,j1);
        }
    }
}
void solve() {
    cin >> n >> m;
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=m;j++) {
            cin >> a[i][j];
        }
    }
    memset(vs,false,sizeof(vs));
    int cnt = 0;
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=m;j++) {
            if (!vs[i][j] && a[i][j]) {
                dfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}