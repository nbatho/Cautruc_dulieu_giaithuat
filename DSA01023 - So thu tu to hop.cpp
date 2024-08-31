#include <bits/stdc++.h>
using namespace std;
int n,k;
bool stop = false;
int a[1005];
int cnt = 0;
void sinh() {
    int i = k;
    while (i > 0 && a[i] == n-k+i) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        cnt++;
        a[i]++;
        for (int j= i+1;j<=n;j++) {
            a[j] = a[j-1] + 1;
        }
    }
}
long long fact(long long f) {
    long long tich = 1;
    for (int i = 1;i<=f;i++) {
        tich*=i;
    }
    return tich;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> k;
        long long tohop = fact(n) / (fact(k) * fact(n-k));
        stop = false;
        for (int i = 1;i<=k;i++) {
            cin >> a[i];
        }
        while (!stop) {
            sinh();         
        }
        cout << tohop - cnt << endl;
        cnt = 0;
    }
    
    
}