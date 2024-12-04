#include <bits/stdc++.h>
using namespace std;
int n;
int x[105];
int c[105][105];
bool used[105];
int best = INT_MAX;
int sum =0;
void Init() {
    cin >> n;
    for (int i = 1 ;i <= n;i++) {
        for (int j = 1 ;j <= n;j++) {
            cin >> c[i][j];
        }   
    }
    memset(used,false,0);
    sum = 0;
    best = INT_MAX;
}
void Try(int i) {
    if (sum >= best) return;
    for (int j = 1;j<=n;j++) {
        if (!used[j]) {
            x[i] = j;
            used[j] = true;
            sum += c[x[i-1]][x[i]];  
            if (i == n) {
                best = min(best,sum);
            }
            else Try(i+1);
            sum -= c[x[i-1]][x[i]];
            used[j] = false;
        }   
    }
}
void solve() {
    Init();
    Try(1);
    cout << best;
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}