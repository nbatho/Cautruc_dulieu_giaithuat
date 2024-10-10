#include <bits/stdc++.h>
using namespace std;
/*
    y tuong chia de tri
    mid = (0 + n-1) /2
    max ở hẳn phía bên trái mid
    max ở hẳn phía bên phải mid
    hoặc max ở cả trái cả phải

*/
int MaxSum2Phia(int a[],int l,int m,int r) {
    int sum = 0, left_sum = INT_MIN, right_sum = INT_MIN;
    for (int i = m ; i >= l ;i--) {
        sum += a[i];
        if (left_sum < sum) left_sum = sum;
    }
    sum = 0;
    for (int i = m+1; i <= r;i++) {
        sum += a[i];
        if (right_sum < sum) right_sum = sum;
    }
    return left_sum + right_sum;
}
int maxSubArrSum(int a[],int l,int r) {
    if (l == r) return a[l];
    int m = (l+r) / 2;
    int maxVal = max(maxSubArrSum(a,l,m),maxSubArrSum(a,m+1,r));
    return max(maxVal,MaxSum2Phia(a,l,m,r));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0 ;i < n;i++) cin >> a[i];
        cout << maxSubArrSum(a,0,n-1) << endl;
    }
}