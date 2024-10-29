#include <bits/stdc++.h>
using namespace std;
string bieuthuctuongduong(string a) {
    string res ="";
    stack<int> st;
        for (int i = 0 ;i < a.size();i++) {
            if (a[i] =='(') st.push(i);
            else if (a[i] == ')') {
                if (!st.empty()) {
                    int top = st.top();st.pop();
                    if (a[top-1] == '+' || top == 0) continue;
                    else if (a[top - 1] == '-') {
                        for (int j = top ;j<=i;j++) {
                            if (a[j] == '+') a[j] = '-';
                            else if (a[j] == '-') a[j] ='+';
                        }
                    }
                }
            }
        }
        for (int i = 0 ;i < a.size();i++) {
            if (a[i] != '(' && a[i] !=')') {
                res += a[i];
            }
        }
        return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a,b;
        cin >> a >> b;
        a = bieuthuctuongduong(a);
        b = bieuthuctuongduong(b);
        
        if (a == b) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}