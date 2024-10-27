#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin,s);
        bool thua;
        stack<char> st;
        for (int i = 0 ;i < s.size();i++) {
            if (s[i] == ')') {
                thua = true;
                char c = st.top();st.pop();
                while (c != '(') {
                    if (c == '+' || c == '-' || c == '/' || c =='*') {
                        thua = false;
                    }
                    c =st.top();
                    st.pop();
                }
                if (thua) break;
            }
            else st.push(s[i]);
        }
        if (thua) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}