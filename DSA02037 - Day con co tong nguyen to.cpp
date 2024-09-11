#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[20];
int b[20];
vector <vector <int>> res;
vector <int> tmp;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2;i*i<=n;i++) {
        if (n%i==0) return false;
    }
    return true;
}
void Init() {
    cin >> n;
    for (int i = 1 ;i <= n;i++) {
        cin >> b[i];
    }
    sort(b+1,b+n+1,greater<int>());
    res.clear();
}
void Try(int i,int k) {
    for (int j = a[i-1] + 1; j<= n-k+i;j++) {
        a[i] = j;
        if (i == k) {
            tmp.clear();
            for (int l = 1;l<=k;l++) {   
                tmp.push_back(b[a[l]]);
            }
                res.push_back(tmp); 
        }
        else Try(i+1,k);
    }
}
void solve() {
    Init();
    for (int k = 1;k<=n;k++) {
        Try(1,k);
    }
    sort(res.begin(),res.end());
    for (int i = 0 ;i < res.size();i++) {
        int sum = 0;
        for (int j = 0 ;j < res[i].size();j++) {
            sum += res[i][j];
        }
        if (isPrime(sum)) {
            for (int l = 0 ;l<res[i].size();l++) {
                cout << res[i][l] << " ";
            }
            cout << endl;
        }
    }

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}