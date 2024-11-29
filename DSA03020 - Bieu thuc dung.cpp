#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    int pos = 0, ans = 0;
    for (int i = 0 ;i < s.size();i++) {
        if (s[i] == '[') pos++;
        if (s[i] ==']') pos--;
        if (pos < 0) {
            for (int j = i + 1;j<s.size();j++) {
                if (s[j] == '[') {
                    ans += j - i;
                    swap(s[i],s[j]);
                    pos = 1;
                    break;
                }
            }
        } 
    }
    cout << ans;
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