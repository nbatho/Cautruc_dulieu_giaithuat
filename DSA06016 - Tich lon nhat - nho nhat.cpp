#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        vector <int> a(n),b(m);
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
        }
        for (int i = 0 ;i < m;i++) {
            cin >> b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout <<(long long ) a[a.size() - 1] * b[0] << endl;
    }
}