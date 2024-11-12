#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int v,e;
        cin >> v >> e;
        vector <int> a[1005];
        for (int i = 0 ;i < e;i++) {
            int x,y; cin >> x >> y;
            a[x].push_back(y);
        }
        for (int i = 1;i<=v;i++) {
            cout << i << ": ";
            for (auto x:a[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}