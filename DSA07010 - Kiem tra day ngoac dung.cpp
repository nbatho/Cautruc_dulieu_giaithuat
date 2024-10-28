#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    stack<char> st;
    bool ngoacdung = true;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            st.push(s[i]);
        } else {
            if (st.empty()) {
                ngoacdung = false;
                break;
            }
            if ((s[i] == ')' && st.top() == '(') || 
                (s[i] == '}' && st.top() == '{') || 
                (s[i] == ']' && st.top() == '[')) {
                st.pop();
            } else {
                ngoacdung = false;
                break;
            }
        }
    }
    if (ngoacdung && st.empty()) cout << "YES";
    else cout << "NO";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
}
