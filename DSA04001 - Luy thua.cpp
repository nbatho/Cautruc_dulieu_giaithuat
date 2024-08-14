#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 +7;
ll n,k;
ll power(ll n ,ll k) {
    if (k == 0) return 1;
    if (k == 1) return n;
    ll tmp = power(n,k/2);
    tmp = (tmp * tmp)%MOD;
    if (k % 2 == 0) return tmp %MOD;
    else return (n*tmp)%MOD;
    
}
void solve() {
    cin >> n >> k;
    cout << power(n,k) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}