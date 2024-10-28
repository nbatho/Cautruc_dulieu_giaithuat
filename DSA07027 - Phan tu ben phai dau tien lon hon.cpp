#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        vector <int> a(n), res(n,-1);
        for (int i = 0 ;i < n;i++) cin >> a[i];
        stack <int> st;
        for (int i = n - 1 ;i >= 0;i--) {
            while (!st.empty() && st.top() <= a[i]) st.pop();
            if (!st.empty()) res[i] = st.top();
            st.push(a[i]);
        }
        for (int i:res) cout << i << " ";
        cout <<endl;
    }
    return 0;
}