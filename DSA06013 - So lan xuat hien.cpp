#include <bits/stdc++.h> 
using namespace std;
void solve() {
    int n,x;
    cin >> n >> x;
    map <int,int> result;
    for (int i = 0 ;i < n;i++) {
        int x;
        cin >> x;
        result[x]++;
    }
    bool found = false;
    for (auto i:result) {
        if (i.first == x) {
            cout << i.second << endl;
            found = true;
        }
    }
    if (!found) {
        cout << -1 << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}