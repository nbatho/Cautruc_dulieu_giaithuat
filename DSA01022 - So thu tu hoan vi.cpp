#include <bits/stdc++.h>
using namespace std;
int n;
bool stop = false;
int a[1005];
int b[1005];
int cnt = 1;
void sinh() {
    int i = n-1;
    while (i > 0 && a[i] < a[i+1]) {
        --i;
    }
    if (i == 0) {
        stop = true;
    }
    else  {
        cnt++;
        int k = n;
        while (a[k] > a[i]) k--;
        swap(a[k],a[i]);
        reverse(a+i+1,a+n+1);
    }
}
void solve() {
    cin >> n;
    stop = false; 
    for (int i = 1;i<=n;i++) {
        cin >> b[i];
        a[i] = b[i];
    }
    while (!stop) { 
        sinh();
        
    }
    cout << cnt << endl;
    cnt = 1;
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}