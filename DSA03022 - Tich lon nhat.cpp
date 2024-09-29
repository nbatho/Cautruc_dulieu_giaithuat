#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0 ;i < n;i++) cin >> a[i];
    sort(a,a+n);
    // Tich 2 so
    long long maxTichDuong2 = a[n-1] * a[n-2];
    long long maxTichAm2 = a[0]*a[1];
    long long max2 = max(maxTichAm2,maxTichDuong2);
    // Tich 3 so
    long long maxTichDuong3 = a[n-1] * a[n-2] * a[n-3];
    long long maxTichAm3 = a[0]*a[1] * a[n-1];
    long long max3 = max(maxTichAm3,maxTichDuong3);

    cout << max(max2,max3) << endl;

}