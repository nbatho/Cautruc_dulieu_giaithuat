#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue <string> q;
        vector <string> res;
        q.push("");
        while (!q.empty()) {
            string s = q.front();
            if (!s.empty())
                res.push_back(s);
            q.pop();
            if (s.length() == n) continue;
            q.push(s + "6");
            q.push(s + "8");
        }
        cout << res.size() << endl;
        for (int i = 0 ;i < res.size();i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }
}