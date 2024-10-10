#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
    2^(n-1)
*/
const ll MOD = 123456789;
ll power(ll n,ll k) {
    if (k == 0 ) return 1;
    if (k == 1) return n%MOD;
    ll tmp = power(n,k/2);
    tmp = tmp*tmp;
    if (k%2 ==0) return tmp%MOD;
    else return (n*tmp)%MOD;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll res = power(2,n-1);
        cout << res%MOD << endl;
    }
}