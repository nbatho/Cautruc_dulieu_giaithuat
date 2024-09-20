#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
        }
        sort(a,a+n);
        string b,c;
        for (int i = 0 ;i < n;i++) {
            if (i%2==0) {
                b += to_string(a[i]);
            }
            else c +=to_string(a[i]);
        }
        long long res = stoll(b) + stoll(c);
        cout << res << endl;
    }
}