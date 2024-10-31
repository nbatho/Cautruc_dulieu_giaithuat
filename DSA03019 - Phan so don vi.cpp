#include <bits/stdc++.h>
using namespace std;
/*
    quy dong 
    a/b - c/d
    tu = a*d - c*b
    mau = b*d
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long p,q;
        cin >> p >> q;
        long long ans;
        while(true) {
            if (q % p == 0) {
                cout << "1/" << q/p << endl;
                break;
            }
            else {
                ans = q/p + 1;
                cout << "1/" << ans << " + ";
                p = p * ans - q;
                q = q * ans;
            }
        }
    }
}