#include <bits/stdc++.h>
using namespace std;
/*
    Tong 1 day la T
    tong cua 2 tap con bang nhau goi la S => tong 2 day con la S + S = 2S
    ma T = 2S => 2S chan => T cung phai la so chan
    presum > sum / 2 bỏ qua
    presum == sum lấy
    presum < sum quay lui
*/

int n;
int a[101];
bool found;
int sum;
void Try(int i,int preSum) {
    if (found) return;
    for (int j = i+1;j<=n;j++) {
        if (preSum + a[j] > sum) continue; // bo qua
        else if(preSum + a[j] == sum) {
            found = 1;
            return;
        }
        else Try(j,preSum +a[j]);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        sum =0;
        for (int i =1;i<=n;i++) {
            cin >> a[i];
            sum += a[i];
        }
        if (sum%2 == 1) {
            cout << "NO" << endl;
        }
        else   {
            sum /=2;
            found = false;
            Try(1,0);

            if (found) cout << "YES" << endl;
            else cout << "NO" << endl; 
        }
    }
}