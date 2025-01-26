#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mod = 1e15 + 7;
ll n;
struct matrix {
    ll mx[4][4];
};

ll mulNumber(ll a, ll b) {
    if (b == 0) return 0;
    ll ans = mulNumber(a, b / 2);
    ans = (ans + ans) % mod;
    if (b % 2 == 1) ans = (ans + a) % mod;
    return ans;
}

matrix operator*(matrix a, matrix b) {
    matrix c;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c.mx[i][j] = 0;
            for (int k = 0; k < 4; k++) {
                c.mx[i][j] = (c.mx[i][j] + mulNumber(a.mx[i][k], b.mx[k][j])) % mod;
            }
        }
    }
    return c;
}

matrix powMod(matrix a, int n) {
    if (n == 1) return a;
    matrix x = powMod(a, n / 2);
    x = x * x;
    if (n % 2 != 0) x = x * a;
    return x;
}
    ll x[] = {6, 3, 2, 1};
void solve() {

cin >> n;
        if (n == 0) {
            cout << 0;
        } else if (n == 1) {
            cout << 1;
        } else if (n == 2) {
            cout << 3;
        } else if (n == 3) {
            cout << 6;
        } else {
            matrix a, res;
            for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                    a.mx[i][j] = 0;
                }
            }
            a.mx[0][0] = a.mx[0][1] = a.mx[0][2] = a.mx[0][3] = 1;
            a.mx[1][1] = a.mx[1][2] = a.mx[1][3] = 1;
            a.mx[2][1] = a.mx[3][2] = 1;

            res = powMod(a, n - 3);

            ll ans = 0;
            for (int i = 0; i < 4; ++i) {
                ans = (ans + mulNumber(res.mx[0][i], x[i])) % mod;
            }

            cout << ans;
        }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}
