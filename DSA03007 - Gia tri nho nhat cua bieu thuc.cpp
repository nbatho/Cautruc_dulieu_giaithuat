#include <bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b) {
    return a > b;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long a[n],b[n];
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
        }
        for (int i = 0 ;i < n;i++) {
            cin >> b[i];
        }
        sort(a,a+n);
        sort(b,b+n,cmp);
        long long  sum = 0;
        for (int i = 0 ;i < n;i++) {
            sum += a[i]*b[i];
        }
        cout << sum << endl;
    }
}