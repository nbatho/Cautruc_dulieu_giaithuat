#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 +7;
ll n;
ll power(ll n ,ll k) {
    if (k == 0) return 1;
    if (k == 1) return n%MOD;
    ll tmp = power(n,k/2);
    tmp = (tmp * tmp)%MOD;
    if (k % 2 == 0) return tmp %MOD;
    else return (n*tmp)%MOD;
    
}
ll dao(ll number) {
    string s = to_string(number);
    reverse(s.begin(),s.end());
    return stoll(s);
}
void solve() {
    cin >> n;
    ll r = dao(n);
    cout << power(n,r) << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}                         