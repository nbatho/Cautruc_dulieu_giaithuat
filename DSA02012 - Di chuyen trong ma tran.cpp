#include <bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105];
int cnt = 0;
bool stop = false;
void Init() {
    cin >> m >> n;
    for (int i = 0;i<m;i++) {
        for (int j = 0 ;j<n;j++) {
            cin >> a[i][j];
        }
    }
    cnt =0;
}
void Try(int i,int j) {
    if (i == m-1 && j == n-1 &&a[i][j]) {
        stop =true;
        cnt++;
        return;
    }
    if (i < m) {
        a[i+1][j] = 1;
        Try(i+1,j);
    }
    if (j < n) {
        a[i][j+1] = 1;
        Try(i,j+1);
    }

}
void solve() {
    Init();
    Try(0,0);
    cout << cnt << endl;
}
int main() {
    int  t;
    cin >> t;
    while (t--) {
        solve();
    }
}