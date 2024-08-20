#include <bits/stdc++.h>
using namespace std;

int binary(int a[], int l, int r, int x) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] == x) 
            return mid;
        else if (x > a[mid]) 
            l = mid + 1;
        else 
            r = mid - 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int a[n+1];
        for (int i = 1; i <= n; i++)  
            cin >> a[i];
        
        int l = 0;
        int r = n - 1;
        int res = binary(a, l, r, x);
        if (res == -1) {
            cout << "NO";
        } else {
            cout << res;
        }
        cout << endl;
    }
}
