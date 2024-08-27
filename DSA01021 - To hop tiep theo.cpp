#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
int b[1005];
bool stop =false;
int cnt = 0;
void sinh() {
    int cnt =0;
    int i = k;
    while (i > 0 && a[i] == n-k+i) {
        --i;
    }
    if (i == 0) {
        cout << k << endl;
    }
    else {
        a[i]++;
        for (int j = i+1;j<=k;j++) {
            a[j] = a[j-1] + 1;
        }
        for (int i = 1;i<=k;i++) {
            for (int j = 1;j<=k;j++) {
                if (a[i] == b[j]) cnt++;
            }
        }
        if (cnt == k) cnt = 0;
        cout << k - cnt << endl;
    }
    
}

void solve() {
    cin >> n>> k;
    if (k > n) swap(n,k);
    for (int i = 1 ;i <= k;i++) {
        cin >> b[i];
        a[i] = b[i];
    }
    sinh();
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}