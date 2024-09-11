#include <bits/stdc++.h>
using namespace std;

int Binary_Search(int a[], int l, int r, int k) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] == k)
            return mid;
        else if (a[mid] > k)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        sort(a, a + n);

        int l = 0;
        int r = n - 1;
        int res = Binary_Search(a, l, r, k);
        if (res == -1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
}
