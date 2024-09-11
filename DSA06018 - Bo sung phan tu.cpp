#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        map<int,int> res;
        for (int i = 0 ;i < n;i++) 
        {
            cin >> a[i];
            res[a[i]]++;
        }
        sort(a,a+n);
        int cnt = 0;
        int l = a[0], r = a[n-1];
        for (int i = l ;i<=r;i++) {
            if (!res[i]) {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}