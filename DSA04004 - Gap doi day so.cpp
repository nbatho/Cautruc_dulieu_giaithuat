#include <bits/stdc++.h>
using namespace std;
long long solve(long long n,long long k) {
    long long mid = pow(2,n-1);
    if (k == mid) return n;
    if (k > mid) return solve(n-1,2*mid - k);
    return solve(n-1,k);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        cout << solve(n,k);
        cout << endl;
    }
}