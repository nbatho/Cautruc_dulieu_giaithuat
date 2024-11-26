#include <bits/stdc++.h>
using namespace std;

int TimKiemNhiPhan(vector<long long> &a, int l, int r, long long x) {
    while (l <= r) {
        int m = l + (r - l) / 2; 
        if (a[m] == x) return m;
        if (x > a[m]) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long C = a[i] * a[i] + a[j] * a[j];
            long long c = sqrt(C);
            if (c * c == C && TimKiemNhiPhan(a, j + 1, n, c) != -1) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}
