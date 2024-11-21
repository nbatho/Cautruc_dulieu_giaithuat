#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n; cin >> n;
    vector <int> a(n);
    for (int i = 0 ;i < n;i++) cin >> a[i];
    int ans = -1;
    vector <int> leftmin(n), rightmax(n);
    leftmin[0] = a[0];
    for (int i = 1;i<n;i++) leftmin[i] = min(leftmin[i-1],a[i]);
    rightmax[n-1] = a[n-1];
    for (int j = n- 2;j >=0;j--) rightmax[j] = max(rightmax[j+1],a[j]);
    int i = 0 , j = 0;
    while (i < n && j < n) {
        if (rightmax[j] > leftmin[i]) {
            ans = max(ans,j-i);
            j++;
        }
        else i++;
    }
    
    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}