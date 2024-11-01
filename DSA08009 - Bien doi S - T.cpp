#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int s, t;
        cin >> s >> t;

        if (s == t) { 
            cout << 0 << endl;
            continue;
        }
        queue<int> q;
        q.push(s);
        int cnt = 0; 
        bool found = false;
        vector <bool> used(1000000,false);
        used[s] = true;
        while (!q.empty() && !found) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                int top = q.front();
                q.pop();
                if (top == t) {
                    cout << cnt << endl;
                    found = true;
                    break;
                }
                if (top <= t && !used[top*2]) {
                    q.push(top*2);
                    used[top*2] = true;
                }
                if (top - 1 > 0 && !used[top - 1]) {
                    q.push(top-1);
                    used[top - 1] = true;
                }

            }
            cnt++;
        }
    }
    return 0;
}
