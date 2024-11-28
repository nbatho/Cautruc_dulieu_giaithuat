#include <bits/stdc++.h>
using namespace std;
int n; 
int checkcanbang(int total, int leftsum,vector <int> &a) {
    for (int i = 0 ; i < n;i++) {
        int rightsum = total - leftsum - a[i];
        if (leftsum == rightsum && leftsum != 0 && rightsum != 0) {
            return i+1;
        }
        leftsum += a[i];
    }
    return -1;
}
void solve() {
    cin >> n;
    vector <int> a(n);
    int total = 0;
    for (int i = 0 ;i < n;i++) {
        cin >> a[i];
        total += a[i];
    }
    cout << checkcanbang(total,0,a);
    
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