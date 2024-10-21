#include <bits/stdc++.h>
using namespace std;

int OperatorLever(char s) {
    if (s == '-' || s == '+') return 1;
    if (s == '*' || s == '/') return 2;
    if (s == '^') return 3;
    return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for(int i= 0;i < s.size();i++) {
            if (s[i] == '(') st.push(s[i]);
            else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                st.pop(); // xoa cap dau ( )
            }
            else if(s[i] == '+' ||s[i] == '-' ||s[i] == '*' ||s[i] == '/' ||s[i] == '^') {
                while (!st.empty() && OperatorLever(s[i]) <= OperatorLever(st.top())) {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            else {res += s[i];}
        }
        while (!st.empty()) {
            if (st.top() != '(') res += st.top();
            st.pop();
        }
        cout << res << endl;
    }
}
