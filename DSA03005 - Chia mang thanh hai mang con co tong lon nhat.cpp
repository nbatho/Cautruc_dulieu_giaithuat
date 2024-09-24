#include<bits/stdc++.h>
using namespace std;
void hieu(int a[],int k,int n) {
    int s1 = 0 ,s2=0;
        for (int i = 0 ;i < k;i++) {
            s1 += a[i];
        }
        for (int i = k ;i<n;i++) {
            s2 += a[i];
    }
    cout << s2 - s1 << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        int a[n];
        for (int i = 0 ;i < n;i++) cin >> a[i];
        sort(a,a+n);
        if (k > n - k) {
            k = n - k;
        }
        hieu(a,k,n);
    }
}