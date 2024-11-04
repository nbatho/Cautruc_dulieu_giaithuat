#include <bits/stdc++.h>
using namespace std;
int n, m, a[1005][1005];
bool used[1005][1005];
int ans = INT_MAX;
void Init() {
    cin >> m >> n;
    for (int i = 1 ;i <= m;i++) {
        for (int j = 1 ;j <= n;j++) {
            cin >> a[i][j];
        }
    }
    memset(used,false,sizeof(used));
    ans = INT_MAX;
}
void Solve() {
    queue <pair<pair <int,int>,int>> q;
    q.push({{1,1},0});
    used[1][1] = true;
    while (!q.empty()) {
        auto x = q.front(); q.pop();
        int i = x.first.first;
        int j = x.first.second;
        int cnt = x.second;
        if (i == m && j == n) {
            ans = min(ans,cnt);
            cout << ans;
            return;
        }
        if (i + a[i][j] <= m && !used[i + a[i][j]][j]) {
            used[i + a[i][j]][j] = true;
            q.push({{i+ a[i][j],j}, cnt+1});
        }
        if (j + a[i][j] <= n && !used[i][j + a[i][j]]) {
            used[i][j + a[i][j]] = true;
            q.push({{i,j+a[i][j]},cnt+1});
        }
    }

    cout << -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Solve();
        cout << endl;
    }
}