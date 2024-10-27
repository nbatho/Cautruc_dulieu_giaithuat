#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        queue<string> q;
        q.push("1");
        int cnt = 0;
        
        while (!q.empty()) {
            string res = q.front();
            q.pop();
            cnt++;
            string res0 = res + "0";
            if (res0.size() < n.size() || (res0.size() == n.size() && res0 <= n)) {
                q.push(res0);
            }
            string res1 = res + "1";
            if (res1.size() < n.size() || (res1.size() == n.size() && res1 <= n)) {
                q.push(res1);
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
