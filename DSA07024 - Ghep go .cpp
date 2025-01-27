#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    stack<int> st;
    int r[n], l[n];
    fill(r, r + n, n);  // Default: no smaller element to the right
    fill(l, l + n, -1); // Default: no smaller element to the left

    // Calculate nearest smaller element to the left
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) l[i] = st.top();
        st.push(i);
    }

    while (!st.empty()) st.pop();

    // Calculate nearest smaller element to the right
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && a[st.top()] >= a[i]) st.pop();
        if (!st.empty()) r[i] = st.top();
        st.push(i);
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        long long ngang = r[i] - l[i] - 1; 
        long long doc = a[i];
        if (ngang >= doc) {               
            ans = max(ans, doc);         
        }
    }
    cout << ans;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl; 
    }

    return 0;
}