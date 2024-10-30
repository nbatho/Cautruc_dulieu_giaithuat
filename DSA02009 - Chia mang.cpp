#include <bits/stdc++.h>
using namespace std;
int n,k, s;
int a[105];
bool used[105] = {false}, found = false;
void Try(int i, int sum ,int cnt ) {
    if (cnt == k) {
        found = true;
        return;
    }
    for (int j = i ; j < n ;j++) {
        if (!used[j] && sum + a[j] <= s) {
            used[j] = true;
            if (sum  + a[j] == s) {
                Try(0,0,cnt + 1);
            }
            else if (!found) Try(j+1, sum + a[j], cnt);
            used[j] = false;
        }
    }
}
void solve() {
    cin >> n >> k;
    int SumArray = 0;
    for (int i = 0 ;i < n;i++) {
        cin >> a[i];
        SumArray += a[i];
    }
    memset(used,false,sizeof(used));
    s = 0;
    found = false;

    if (SumArray % k !=0) {
        cout << 0;
        return;
    }
    s = SumArray / k;
    Try(0,0,0);
    cout << (found ? 1:0);
}
int main() {
    int t;
    cin >> t;
    while ( t-- ) {
        solve();
        cout << endl;
    }
    return 0;
}