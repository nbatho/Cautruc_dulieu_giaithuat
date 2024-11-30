#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    int a[n];
    int cnt = 0;
    for (int i = 0 ;i<n;i++) cin >> a[i];
    for (int i = 0 ;i < n-1;i++) {
        int min_idx = i;
        for (int j = i+1;j<n;j++) {
            if (a[min_idx] > a[j]) 
                min_idx = j;
        }
        if (min_idx != i) {
            swap(a[i],a[min_idx]);
            cnt++;
        }
        
    }
    cout << cnt;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}