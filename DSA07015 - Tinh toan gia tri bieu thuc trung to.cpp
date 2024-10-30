#include <bits/stdc++.h>
using namespace std;

int Priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1;
}
long long toNum(string s) {
    long long num = 0;
    for (int i = 0 ;i <s.size();i++) {
        num = num*10 + (s[i] - '0');
    }
    return num;
}
void solve() {
    string s;
    cin >> s;
    stack<char> st;
    vector<string> tmp;
    stack<long long> ans;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else if (isdigit(s[i])) {
            string num;
            while (i < s.size() && isdigit(s[i])) {
                num += s[i];
                i++;
            }
            i--;
            tmp.push_back(num);
        } else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                tmp.push_back(string(1, st.top()));
                st.pop();
            }
            st.pop();
        } else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
            while (!st.empty() && Priority(st.top()) >= Priority(s[i])) {
                tmp.push_back(string(1, st.top()));
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while (!st.empty()) {
        if (st.top() != '(') tmp.push_back(string(1, st.top()));
        st.pop();
    }

    for (int i = 0; i < tmp.size(); i++) {
        if (isdigit(tmp[i][0])) { 
            ans.push(toNum(tmp[i]));
        } else if (tmp[i] == "+" || tmp[i] == "-" || tmp[i] == "*" || tmp[i] == "/" || tmp[i] == "^") {
            long long a = ans.top(); ans.pop();
            long long b = ans.top(); ans.pop();
            long long res = 0;

            if (tmp[i] == "+") res = b + a;
            else if (tmp[i] == "-") res = b - a;
            else if (tmp[i] == "*") res = b * a;
            else if (tmp[i] == "/") {
                res = b/a;
            }
            else if (tmp[i] == "^") res = pow(b, a);

            ans.push(res);
        }
    }

    cout << ans.top();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
