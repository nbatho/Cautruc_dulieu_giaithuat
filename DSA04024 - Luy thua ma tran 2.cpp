#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
ll a[20][20],tmp[20][20];
ll n,k;
void Init() {
    cin >> n >> k;
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            cin >> a[i][j];
            tmp[i][j] = a[i][j];
        }
    }
}
void Mul(ll a[20][20],ll b[20][20]) {
    ll c[20][20];
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            c[i][j] = 0;
            for (int k = 0 ;k < n;k++) {
                c[i][j] = (c[i][j] + a[i][k] * b[k][j]) %MOD;
            }
        }
    }
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            a[i][j] = c[i][j];
        }
    }
}
void PowMatrix(ll a[20][20],int k) {
    if (k == 1) return;
    PowMatrix(a,k/2);
    Mul(a,a);
    if (k%2 !=0) Mul(a,tmp);
}
void solve() {
    Init();
    PowMatrix(a,k);
    ll sum = 0;
    for (int i = 0 ;i < n;i++) {
        sum = (sum +a[i][n-1])%MOD;
    }
    cout << sum << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}