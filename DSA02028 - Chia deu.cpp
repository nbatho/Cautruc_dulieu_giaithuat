#include <bits/stdc++.h>
using namespace std;
int n,k, sumArr = 0,s,ans =0;
int a[20];
void Init() {
    cin >> n >> k;
    sumArr = 0;
    ans = 0;
    for (int i = 0;i <n;i++) {
        cin >> a[i];
        sumArr += a[i];
    }
}
void Try(int i,int sum,int cnt) {
    if (cnt == k && i == n) {
        ans++;
        return;
    }
    for (int j = i;j < n ;j++) {
        sum += a[j];
        if (sum == s) Try(j+1,0,cnt+1);
    }
}
void Solve() {
    if (sumArr % k != 0) cout << 0;
    else {
        s = sumArr / k;
        Try(0,0,0);
        cout << ans;
    }
    cout << endl;
}
int main() {
    Init();
    Solve();
}