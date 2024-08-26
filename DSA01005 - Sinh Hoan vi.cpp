#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
bool stop = false;
void ktao() {
    for (int i = 1 ;i <= n;i++) {
        a[i] = i;
    }
}
void sinh() {
    int i = n-1;
    while (i >0 && a[i] > a[i+1]) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        int k = n;
        while (a[k] < a[i]) k--;
        swap(a[k],a[i]);
        reverse(a+i+1,a+n+1);
    }
}
void solve() {
    cin >> n;
    ktao();
    stop = false;
    while (!stop) {
        for (int i = 1;i<=n;i++) {
            cout << a[i];
        }
        sinh();
        cout << " ";
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}