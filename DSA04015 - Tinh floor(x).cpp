#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,x;
        cin >> n >> x;
        long long a[n];
        int cnt =0;
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
            if (a[i] <=x) {
                cnt++;
            }
        }
        if (!cnt) cout << -1;
        else cout << cnt;
        cout << endl;

    }
    return 0;
}