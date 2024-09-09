#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
int b[25];
vector<string> res;

void Init() {
    cin >> n >> k;
    for (int i = 1;i<=n;i++) {
        cin >> b[i];
    }
    sort(b+1,b+n+1);
}
void Try(int i) {
    for (int j = a[i-1] +1 ;j<=n-k+i;j++) {
            a[i] = j;
            if (i == k) {
                for (int l =1;l<=k;l++) {
                    cout << b[a[l]] << " ";
                }
                cout << endl;
            }
            else Try(i+1);
            
    }
}
void solve() {
    Init();
    Try(1);
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
}