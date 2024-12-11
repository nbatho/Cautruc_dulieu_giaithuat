#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    cin.ignore();
    string s1; getline(cin,s1);
    int m;
    cin >> m;
    cin.ignore();
    string s2; getline(cin,s2);
    if (s1 != s2) cout << 0;
    else cout << 1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}