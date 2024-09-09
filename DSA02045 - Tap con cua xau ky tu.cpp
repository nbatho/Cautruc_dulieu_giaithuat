#include <bits/stdc++.h>
using namespace std;
string s;
int k;
int n; // size s;
int a[25];
vector <string > res;
void Init() {
    cin >> n;
    cin >> s;
}

void Try(int i,int k) {
    for (int j = a[i-1] + 1 ;j <=n-k+i;j++) {
        a[i] = j;
        if (i == k) {
            string tmp;
            for (int l = 1;l<=k;l++) {
                tmp += s[a[l] - 1]  ;
            }
            if (tmp.size() > 0) {
                res.push_back(tmp) ;
            }
            cout << endl;
        }
        else Try(i+1,k);
    }
}
void solve() {
    Init();
    res.clear();
    for (int k = 1;k<=n;k++) {
        Try(1,k);
    }
    sort(res.begin(),res.end());
    for (int i = 0 ;i < res.size();i++) {
        cout << res[i] << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}