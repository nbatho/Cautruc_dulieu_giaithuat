#include <bits/stdc++.h>
using namespace std;

string s;

void sinh() {
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1') {
        i--;
    }
    if (i < 0) {
        for (int i = 0 ;i < s.size();i++) {
            cout << 0;
        }
        cout << endl;
    }
    else {
        s[i] = '1';
        for (int j = i+1 ;j<s.size();j++) {
            s[j] = '0';
        }
        cout << s;
    }
}

void solve() {
    cin >> s; 
    sinh();
    cout << endl;
}

int main() { 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
