#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    stack <int> st;
    for (int i = 0 ;i < s.size();i++) {
        if (isdigit(s[i])) {
            st.push(s[i] - '0');
        }
        else if (s[i] == '+'|| s[i] == '-' || s[i] == '*' || s[i] == '/'){
            int a,b;
            int num = 0;
            a = st.top(); st.pop();
            b = st.top(); st.pop();
            if (s[i] == '+') num = b+a;
            else if (s[i] == '-') num = b-a;
            else if (s[i] == '*') num = b*a;
            else if (s[i] == '/') num = b/a;
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