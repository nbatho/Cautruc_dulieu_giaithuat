#include<bits/stdc++.h>
using namespace std;
/*
    sap xep theo thu tu tang dan
    tim vi tri k - a[i] dau tien va cuoi cung 
    so cap = vi tri cuoi - vi tri dau +1
    vd 
    4 6 
    1 5 7 -1
    a[0] = 1 => k - a[i] = 5 
    vi tri dau tien = 2
    vi tri cuoi cung = 2
    => so cap = cuoi -dau +1 
*/
int First(int a[],int l ,int r,int x) {
    int res = -1;
    while (l <=r) {
        int m = (l+r) / 2;
        if (a[m] == x) {
            res = m;
            r = m-1;
        }
        else if(a[m] > x) {
            r = m-1;
        }
        else l = m+1;
    }
    return res;
}
int Last(int a[],int l ,int r,int x) {
    int res = -1;
    while (l <=r) {
        int m = (l+r) / 2;
        if (a[m] == x) {
            res = m;
            l = m+1;
        }
        else if (a[m] < x) {
            l = m+1;
        }
        else r =m-1;
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int a[n];
        long long ans = 0;
        for (int i = 0 ;i < n;i++) cin >> a[i];
        sort(a,a+n);
        for (int i = 0 ;i < n-1;i++) {
            int l = First(a,i+1,n-1,k - a[i]);
            int r = Last(a,i+1,n-1,k - a[i]);
            if (l!= -1) {
                ans += r - l +1;
            } 
        }
        cout << ans << endl;
    }
}