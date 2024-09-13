#include <bits/stdc++.h>
using namespace std;
int n,s;
int t[100],x[100];
long long cnt = 0 ,sum =0;
long long  MinVal = LLONG_MAX;
void Try(int k ) {
    for (int i = 0 ;i <= 1;i++) {
        x[k] =i;
        sum += x[k]*t[k];
        cnt += i;
        if (k == n-1) {
            if (sum == s) {
                MinVal = min(MinVal,cnt);
            }
            
        }
        else if (sum <= s) Try(k+1);
        sum -= x[k]*t[k];
        cnt -=i;
    }
}
int main() {
    cin >> n >> s;
    for (int i = 0 ;i < n;i++) cin >> t[i];
    sort(t,t+n,greater<int>());
    Try(0);
    if (MinVal == LLONG_MAX) {
        cout << -1 << endl;
    }
    else cout << MinVal << endl;
    
}