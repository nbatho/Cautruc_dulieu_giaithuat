#include <bits/stdc++.h>
using namespace std;
vector <int> res;
bool check(string s) {
    set <char> se(s.begin(),s.end());
    return se.size() == s.size();
}
void gen() {
    queue <string> q;
    for (char i='1'; i <='5';i++) {
        q.push(string(1,i));
        res.push_back(i -'0');
    }
    while (!q.empty()) {
        string top = q.front(); q.pop();
        
        for (char i = '0'; i<='5';i++) {
            string tmp = top + string(1,i);
            if (check(tmp)) {
                q.push(tmp);
                res.push_back(stoi(tmp));
            }
        }
        if (top.size() > 6 ) break;
    }
}
void solve() {
    int a, b ; cin >> a >> b;
    int r = upper_bound(res.begin(),res.end(),b) - res.begin();
    int l = lower_bound(res.begin(),res.end(),a) - res.begin();
    cout << r - l;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    gen();
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}