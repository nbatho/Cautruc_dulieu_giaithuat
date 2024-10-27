#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue <string> q;
        stack <string> st;
        q.push("");
        while (!q.empty()) {
            string s = q.front();
            st.push(s);
            q.pop();
            if (s.size() == n) continue;

            q.push(s + "6");
            q.push(s + "8");
        }
        while (!st.empty()) {
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}