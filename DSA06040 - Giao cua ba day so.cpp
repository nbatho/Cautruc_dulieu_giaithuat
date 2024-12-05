#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    long long  a[n1 + 1], b[n2+1], c[n3+1];
    for (int i = 0 ;i < n1;i++) cin >> a[i];
    for (int i = 0 ;i < n2;i++) cin >> b[i];
    for (int i = 0 ;i < n3;i++) cin >> c[i];
    int i = 0, j = 0, k =0;
    vector <int> luu;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && b[j] == c[k]) {
            luu.push_back(a[i]);
            ++i;
            ++j;
            ++k;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k]) j++;
        else k++;
    }
    if (!luu.empty()) {
        for (auto i:luu) cout << i << " ";
    }
    else cout << -1;
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}