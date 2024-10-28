#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    stack<string> st;
    for (int i = 0 ;i < s.size();i++) {
        if (isalpha(s[i])) st.push(string(1,s[i]));
        else {
            string stor;
            string a = st.top();st.pop();
            string b = st.top();st.pop();
            stor = "(" + b + s[i] + a +")";
            st.push(stor);
        }
    }
    cout << st.top();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}