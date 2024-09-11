#include <bits/stdc++.h>
using namespace std;
int n;
int a[15][15];
bool used[15][15];
vector <string> res;
bool check = false;
void Init() {
    cin >> n;
    for (int i = 1 ;i <= n;i++) {
        for (int j = 1 ;j <= n;j++) {
            cin >> a[i][j];
            used[i][j] = false;
        }
    }
    res.clear();
    check = false;
}
void Try(int i ,int j ,string s) {
    if (a[1][1] == 0 || a[n][n] == 0) return;
    if (i == n && j == n) 
        res.push_back(s);
    if (a[i+1][j] == 1 && i < n && !used[i+1][j])
    {
        used[i][j] = true;
        Try(i+1,j,s + "D");
        used[i][j] = false;
    }
    if (a[i][j+1] == 1 && j < n && !used[i][j+1])
    {
        used[i][j] = true;
        Try(i,j+1,s + "R");
        used[i][j] = false;
    }
    if (a[i-1][j] == 1 && i > 1 && !used[i-1][j])
    {
        used[i][j] = true;
        Try(i-1,j,s + "U");
        used[i][j] = false;
    }
    if (a[i][j-1] == 1 && j > 1 && !used[i][j-1])
    {
        used[i][j] = true;
        Try(i,j-1,s + "L");
        used[i][j] = false;
    }
}
void solve() {
    Init();
    Try(1,1,"");
    if (res.size() == 0) cout << -1;
    else 
    {
        sort(res.begin(),res.end());
        for(int i=0; i<res.size(); i++){
			cout << res[i] << ' ';
		}
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}