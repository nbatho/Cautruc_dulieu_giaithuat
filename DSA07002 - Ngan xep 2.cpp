#include <bits/stdc++.h>
using namespace std;
int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        stack <int> st;
        int n;
        while (cin >> s) {
            if (s == "PUSH") {
                cin >> n;
                st.push(n);
            }
            else if(s == "POP" && !st.empty()) {
                st.pop();
            }
            else if(s == "PRINT") {
                if (!st.empty()) cout << st.top() << endl;
                else cout << "NONE" << endl;
            }
        }
    }
}