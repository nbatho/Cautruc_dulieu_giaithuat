#include <bits/stdc++.h>
using namespace std;

string s;

void sinh() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if (i >= 0) s[i] = '1';
}

void solve() {
    cin >> s; 
    s = '0' + s; 
    sinh();
    cout << s.substr(1) << endl; 
}

int main() { 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
