#include <bits/stdc++.h>
using namespace std;
char solve(int n,int k) {
    while (n > 0) {
        int len = pow(2,n) - 1;
        int mid = (len + 1) / 2;
        if (k == mid) return 'A' + (n-1);
        if (k < mid) {
            n--;
        }
        else  {
            k -= mid;
            n--;
        }
    }
    return '\0';
}
int main() {
    int t; cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        cout << solve(n,k);
        cout << endl;
    }
    return 0;
}