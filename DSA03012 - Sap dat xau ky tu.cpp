#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        map <char,int> res;
        for (int i = 0 ;i < s.size();i++) {
            res[s[i]]++;
        }
        bool found = true;
        for (auto i:res) {
            if (i.second > (s.size() + 1) /2) {
                found =false;
                break;
            }
        }
        if (found && res.size() > 1) cout << 1 << endl;
        else cout << -1 << endl;
    }
}