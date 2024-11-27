#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), ans(n, -1), f(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        f[i] = mp[a[i]];
    }

    stack<int> st;
    for (int i = n - 1; i >= 0; i--) { 
        while (!st.empty() && mp[st.top()] <= f[i]) st.pop();
        if (!st.empty()) ans[i] = st.top();
        st.push(a[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
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
