#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue<string> q;
        q.push("1");
        while (!q.empty()) {
            string s = q.front();
            q.pop();
            int num = 0;
            for (char ch : s) {
                num = (num * 10 + (ch - '0')) % n;
            }
            if (num == 0) {
                cout << s << endl;
                break;
            }

            q.push(s + "0");
            q.push(s + "1");
        }
    }
}
