#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    string NgoacSai = "";
    stack <char> st;
    for (int i = 0 ;i < s.size();i++) {
        if (s[i] == '(') st.push(s[i]);
        else {
            if (st.empty()) {
                NgoacSai += s[i];
                continue;
            }
            else if (!st.empty() && st.top() == ')') {
                st.pop();
            }
            st.pop();
        }
    }
    while (!st.empty()) {
        NgoacSai += st.top();
        st.pop();
    }
    int mo = 0, dong = 0;
    int res = 0;
    for (int i = 0 ;i < NgoacSai.size();i++) {
        if (NgoacSai[i] == '(') mo++;
        else dong++;
    }
    res = mo/2 + dong/2 + mo%2 + dong%2; // do neu mo du hoac dong du thi phai doi chieu 2 cai day
    cout << res;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}