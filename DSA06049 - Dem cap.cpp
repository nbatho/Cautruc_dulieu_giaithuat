#include <bits/stdc++.h>
using namespace std;
/*
    a[j] - a[i] < k
    => tim hieu dau tien = k 
    a[j] >= k + a[i]
*/
int First(int a[],int l,int r,int x) {
    int res = -1;
    while (l <=r) {
        int m = (l+r) / 2;
        if (a[m] >= x) {
            res = m;
            r = m-1;
        }
        else l = m+1;
    }
    return res;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n,k;
		cin >> n >> k;
		int a[n];
		long long cnt = 0;
		for (int i = 0;i<n;i++) cin >> a[i];
        sort(a,a+n);
		for (int i = 0 ;i < n-1;i++) {
			int *it = lower_bound(a+i+1,a+n,k+a[i]);
            cnt += it - (a+i+1);

 		}
 		cout << cnt << endl;
	}
}
