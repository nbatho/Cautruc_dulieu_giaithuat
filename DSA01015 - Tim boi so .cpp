#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[105];
bool found = false;
long long minVal = 1e18;
void Try(int i) {
    for (int j = 0 ;j<=1;j++) {
        a[i] =j;
        if (i == m) {
            long long s= 0;
            for (int l = 1;l<=m;l++) {
                s = 10*s + a[l] *9;
            }
            if (s % n == 0 && s>=n) {
                minVal = min(minVal,s);
                found = true;
            }
        }
        else Try(i+1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        found = false;
        m =1;
        minVal = 1e18;
        cin >> n;
        while (m <= 17 && !found) {
            Try(1);
            m+=1;
        }
        cout << minVal << endl;
    }
}