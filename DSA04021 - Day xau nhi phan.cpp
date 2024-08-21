#include <bits/stdc++.h>
using namespace std;
long long f[93];
void Init() {
    f[1] = 1;
    f[2] = 2;
    for (int i = 2;i<=93;i++) {
        f[i] = f[i-1]+f[i-2];
    }
}
long long  FiboXau(long long n,long long k) {
    if (n == 1) return 0;
    if (n == 2) return 1;
    if (k <=f[n-2]) return FiboXau(n-2,k);
    else return FiboXau(n-1,k-f[n-2]);
}
int main() {
    Init();
    int t;
    cin >> t;
    while (t--) {
        long long n,k;
        cin >> n >> k;
        cout << FiboXau(n,k) << endl;
    }
}

