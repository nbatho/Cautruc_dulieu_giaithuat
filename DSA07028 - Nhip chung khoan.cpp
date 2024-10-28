#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector <int> a(n+1);
        for (int i = 1 ;i <= n;i++) cin >> a[i];
        stack <int> st;
        for (int i = 1;i<=n;i++) {
            while (!st.empty() && a[i] >= a[st.top()]) {
                st.pop();
            }
            if (!st.empty()) {
                cout << i - st.top() << " ";
            }
            else cout << i << " ";
            st.push(i);
        }
        cout << endl;
    }
    return 0;
}