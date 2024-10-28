#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    reverse(s.begin(),s.end());
    stack<int> st;
    for (int i = 0 ;i < s.size();i++) {
        if (isdigit(s[i])) st.push(s[i] - '0');
        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int num;
            int a = st.top();st.pop();
            int b = st.top();st.pop();
            if (s[i] == '+') num = a + b;
            else if  (s[i] == '-') num = a - b;
            else if  (s[i] == '*') num = a * b;
            else if  (s[i] == '/') num = a / b;
            st.push(num);
        }
    }
    cout << st.top();
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
}