#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n;
        cin >> m >>n;
        vector<int> p(m),q(n);
        vector<int> res(m+n-1);
        for (int i = 0 ;i < m;i++) cin >> p[i];
        for (int i = 0 ;i < n;i++) cin >> q[i];
        for (int i = 0 ;i < n;i++) {
            for (int j = 0 ;j < m;j++) {
                res[i+j] += q[i]*p[j];
            }
        }
        for (int i:res) cout << i << " ";
        cout << endl;
    }
}