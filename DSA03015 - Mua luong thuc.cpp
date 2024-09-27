#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s,m;
        cin >> n >> s >> m;
        int soluongcan = m * s;
        int SoNgayChuNhat = s/7;
        int SoNgay = s - SoNgayChuNhat;
        if (soluongcan > SoNgay*n) cout << -1 << endl;
        else {
            int res = (soluongcan + n - 1)/n;
            cout << res << endl;

        }
    }
}