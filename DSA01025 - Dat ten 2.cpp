#include <bits/stdc++.h>
using namespace std;
int n,k;
bool stop = false;
string a;
void sinh() {
    int i = k;
    while (i>0 && a[i] == n-k+i) {
        --i;
    }
    if (i == 0) {
        stop =true;
    }
    else {
        a[i]++;
        for (int j =i+1;j<=k;j++) {
            a[j] = a[j-1] + 1;
        }
    }
}
void solve() {
    cin >> n >> k;
    stop = false;
    for (int i = 1;i<=k;i++) {
        a[i] = i;
    }
    while (!stop) {
        for (int i = 1 ;i <=k;i++) {
            cout <<char( a[i] +64);
        }
        sinh();
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}