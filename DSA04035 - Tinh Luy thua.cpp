#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
ll n,k;
ll power(ll n,ll k) {
    if (k == 0) return 1;
    if (k == 1) return n %MOD;
    ll tmp = power(n,k/2);
    ll res =(tmp*tmp)%MOD;
    if (k % 2== 0) return res%MOD;
    else return (res*n)%MOD;
}
void solve() {
    while (cin >> n >> k) {
        if (n == 0 && k ==  0) return;
        cout << power(n,k) << endl;
    }
}
int main() {
    solve();
    return 0;
}