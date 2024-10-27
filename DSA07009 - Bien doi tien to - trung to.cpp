#include <bits/stdc++.h>
using namespace std;
/*
    đảo ngược string
    giải thích test1
    gặp chữ đẩy vào stack
    nếu gặp toán tử 
    lấy 2 phần tử đầu stack 
*/
void solve() {
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    stack <string> st;
    for (int i = 0 ;i < s.length();i++) {
        if (isalpha(s[i])) {
            st.push((string(1,s[i])));
        }
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            string stor;
            string a,b;
            a = st.top();
            st.pop();
            b = st.top();
            st.pop();
            stor += "(" + a + s[i] + b + ")";
            st.push(stor);
        }
    }
    while (!st.empty()) {
        cout << st.top();
        st.pop();
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