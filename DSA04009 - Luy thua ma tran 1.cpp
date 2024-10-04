#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
ll n,k;
ll a[20][20];
ll tmp[20][20];
void Mul(ll a[20][20],ll b[20][20]) {
    ll c[20][20];
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            c[i][j] = 0;
            for (int k = 0 ;k<n;k++) {
                c[i][j] = (c[i][j]+a[i][k]*b[k][j]) %MOD;
            }
        }
    }
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            a[i][j] = c[i][j];
        }
    }
}
void PowerMatrix(ll a[20][20],ll k) {
    if (k == 1) return;
    PowerMatrix(a,k/2);
    Mul(a,a);
    if (k%2 !=0) Mul(a,tmp);
    
}
void Init() {
    cin >> n >> k;
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            cin >> a[i][j];
            tmp[i][j] = a[i][j];
        }
    }
}
void In() {
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < n;j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
void solve() {
    Init();
    PowerMatrix(a,k);
    In();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}