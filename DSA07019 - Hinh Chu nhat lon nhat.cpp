#include <bits/stdc++.h>
using namespace std;
const int maxn = 100005;
int a[maxn], l[maxn], r[maxn];

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    stack<int> st;
    for (int i = 1; i <= n; i++) {
        if (!st.empty()) {
            while (!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
        }
        if (st.empty()) {
            l[i] = 0;
        } else {
            l[i] = st.top(); 
        }
        st.push(i);
    }

    while (!st.empty()) st.pop();
    for (int i = n; i >= 1; i--) {
        if (!st.empty()) {
            while (!st.empty() && a[st.top()] >= a[i]) {
                st.pop();
            }
        }
        if (st.empty()) {
            r[i] = n + 1;
        } else {
            r[i] = st.top();
        }
        st.push(i);
    }
    long long ans = -1e9;
    for (int i = 1; i <= n; i++) {
        int width = r[i] - l[i] - 1; 
        long long area =(long long) width * a[i];
        ans = max(ans,area);
    }

    cout << ans << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}