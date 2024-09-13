#include<bits/stdc++.h>
using namespace std;
int n,s;
int t[50],x[50],tmax[50];
int cbest , c , sum;
void Init() {
    cin >> n >> s;
    for (int i = 1;i<=n;i++) {
        cin >> t[i];
    }
    sort(t+1,t+n+1,greater<int>());
    tmax[n] = t[n];
    for (int i = n-1;i>=1;i--) {
        tmax[i] = max(t[i],tmax[i+1]);
    }
    c = 0;
    sum = 0;
    cbest = INT_MAX;
}
void Try(int k) {
    int tmp = (c + (s - sum)) / tmax[k];
    if (tmp >= cbest) return;
    for (int i = 0 ;i <=1;i++) {
        x[k] = i ;
        sum += x[k] * t[k];
        c += i;
        if (k == n) {
            if (sum == s && c < cbest) {
                cbest = min(cbest,c);
            } 
        }
        else if (sum <= s) Try(k+1);
        sum -= x[k]*t[k];
        c -=i;
    }

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Try(1);
        if (cbest == INT_MAX) {
            cout << -1 << endl;
        }
        else cout << cbest << endl;
    }
}