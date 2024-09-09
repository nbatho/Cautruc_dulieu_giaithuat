#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[25] , b[25];
vector <vector <int>> res;
vector <int> tmp;
vector <string> result;
void Try(int i,int k) {
    for (int j = a[i-1] + 1 ; j <= n - k + i ;j++) {
        a[i] = j;
        if (i == k) {
            tmp.clear();
            int s= 0;
            for (int l = 1;l <= k ;l++) 
                s += b[a[l]];
            if (s % 2 != 0 ) {
                for (int l = 1;l <= k ;l++) 
                    tmp.push_back(b[a[l]]);
            }
            if (tmp.size() > 0) 
                res.push_back(tmp);       
        }
        else Try(i+1,k);
    }
}
void Init() {
    cin >> n;
    for (int i = 1;i<=n;i++) 
        cin >> b[i];
    sort(b+1,b+n+1,greater<int>());
}
void solve() {
    res.clear();
    Init();
    for (int k = 1;k <= n;k++) {
        Try(1,k);
    }
    sort(res.begin(),res.end());
    for (int i = 0 ;i < res.size();i++) {
        for (int j = 0 ;j < res[i].size();j++) 
            cout << res[i][j] << " ";
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}