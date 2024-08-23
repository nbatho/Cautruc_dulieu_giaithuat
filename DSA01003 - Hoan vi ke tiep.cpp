#include <bits/stdc++.h>
using namespace std;
int a[1001];
int n;
void sinh() {
    int i = n-1;
    while (i >=1 && a[i] > a[i+1] ) {
        --i;
    }
    if (i == 0) // last configuration
    {
        for (int i = 1;i<=n;i++) {
            cout << i << " ";
        }
    }
    else {
        int j =n;
        while (a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
        for (int i = 1;i<=n;i++) {
            cout << a[i] << " ";
        }
    }
}
void solve() {
    cin >> n;
    for (int i = 1 ;i <= n;i++) cin >> a[i];
    sinh();
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}