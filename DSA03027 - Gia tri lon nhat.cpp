#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <long long> a(n+n);
    long long sum =0;
    for (int i = 1 ;i <= n;i++) {
        cin >> a[i];
        if (a[i] > 0) sum += a[i]*2;
    }
    cout << sum << endl;
}