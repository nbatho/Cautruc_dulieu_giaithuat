#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[n];
        int cnt = 0;
        for (int i = 0 ;i < n;i++) cin >> a[i];
        for (int i = 0 ;i < n-1;i++) {
            for (int j = i+1;j<n;j++) {
                int sum = a[i] + a[j];
                if (sum == k) {
                cnt++;
                }
            }
            
        }
        cout << cnt << endl;
    }
}