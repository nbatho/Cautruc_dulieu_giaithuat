#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> a(n),b(n);
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b.begin(),b.end());
        bool found = true;
        for (int i = 0 ;i < n;i++) {
            if (a[i] != b[i] && a[i] !=b[n-i-1]) {
                found = false;
                break;
            }
        }
        if (found) cout <<"Yes" << endl;
        else cout << "No" << endl;
    }
}