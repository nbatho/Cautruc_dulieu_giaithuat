#include <bits/stdc++.h>
using namespace std;
/*
    aaabb
    aaa so khoang giua la (3-1) = 2
    a b a b a
    so ky tu can dien la (d-1) ky tu
    => CTTQ (max - 1) * (d -1 ) > len - max
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        string s;
        cin >>d >>  s;
        map <char,int> res;
        int maxC = INT_MIN;
        for (int i = 0 ;i < s.size();i++) {
            res[s[i]]++;
        }
        for (auto i:res) {
            maxC = max(maxC,i.second);
        }
        if ((maxC - 1) * (d - 1) > s.size() - maxC) cout << -1 << endl;
        else cout << 1 << endl;
    }
}