#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    stack <string> st;
    for (int i = 0 ;i < s.size();i++) {
        if (isalpha(s[i])) st.push(string(1,s[i]));
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            string stor ="";
            stor = s[i] + b + a;
            st.push(stor);
        }
    }
    while (!st.empty()) {
        cout << st.top();st.pop();
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}