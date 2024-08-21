#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
long long n;
void MulMatrix(long long a[2][2],long long b[2][2]) {
    long long tmp[2][2];
    for (int i = 0 ;i < 2;i++) {
        for (int j = 0 ;j < 2;j++) {
            tmp[i][j] = 0;
            for (int k = 0 ;k<2;k++) {
                tmp[i][j] =  (tmp[i][j] + a[i][k]*b[k][j])%MOD;
            }
        }   
    }
    for (int i = 0 ;i < 2;i++) {
        for (int j = 0 ;j<2;j++) {
            a[i][j] = tmp[i][j];
        }
    }
}
void Pow(long long a[2][2],long long k) {
    if (k == 1) return ;
    long long base[2][2] = { {1,1},{1,0}};
    Pow(a,k/2);
    MulMatrix(a,a);
    if (k % 2 != 0) MulMatrix(a,base);
}
void solve() {
    cin >> n;
    long long res[2][2] = { {1,1},{1,0}};
    Pow(res,n);
    cout << res[0][1];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}