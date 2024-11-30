#include <bits/stdc++.h>
using namespace std;
int Binary_Search(vector <int> &a,int l, int r,int x){
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        else if (x > a[m]) l = m+1;
        else r = m -1;
    }
    return -1;
}
void solve() {
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for (int i = 0 ;i < n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    for (int i = 0 ;i < n;i++) {
        for (int j = i + 1;j <n;j++) {
            if (Binary_Search(a,j+1,n-1,k - a[i] - a[j]) != -1) {
                cout <<"YES";
                return;
            }
        }   
    }
    cout <<"NO";
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