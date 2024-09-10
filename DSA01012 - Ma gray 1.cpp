#include <bits/stdc++.h>
using namespace std;
int n;
string s[10000];
void solve() {
    cin >> n;
    int len = pow(2,n);
    s[1] = "0";
    s[2] = "1";
    if (n > 1) {
        int vitri = 2; // vị trí đặt gương
        for (int i = 2;i<=n;i++) {
            int k = pow(2,i);
            for (int j = 1;j<=vitri;j++) {
                s[k - j + 1] = "1" + s[j]; // sinh phần nửa dưới
                s[j] = "0" + s[j]; // sinh nữa trên
            }
            vitri = k;
        }

        for (int j =1 ;j<=len;j++) {
            cout << s[j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
       solve(); 
    }
    
}