#include<bits/stdc++.h>
using namespace std;
/*
    maxx phan tu dau tien lon hon phan tu hien tai
    minx pha tu dau tien nho hon phan tu hien tai
    ans[minx[maxx[i]]]
*/
void solve() {
    int n; cin >> n;
    vector <int> a(n), maxx(n,-1), minx(n,-1),ans(n,-1);
    for (int i = 0 ;i < n;i++) {
        cin >> a[i];
    }
    stack <int> st;
    for (int i = 0 ;i < n;i++) {
        while (!st.empty() && a[st.top()] < a[i]) {
            maxx[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()) st.pop();

    for (int i = n - 1;i>=0;i--) {
        while(!st.empty() && a[st.top()] >= a[i]) {

            st.pop();
        }
        if (!st.empty()) minx[i] = st.top();
        st.push(i);
    }
    for (int i = 0 ;i < n;i++) {
       if (maxx[i] == -1 || minx[maxx[i]] == -1 ) cout << -1 << " ";
       else {
            cout << a[minx[maxx[i]]] << " ";
       } 
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