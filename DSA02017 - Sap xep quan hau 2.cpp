#include <bits/stdc++.h>
using namespace std;
int n = 8;
bool Xuoi[105],Nguoc[105], Cot[105];
int a[105][105],x[105],b[105][105];
int maxVal = INT_MIN;
void Init() {
    for (int i = 1;i<=n;i++) {
        for (int j = 1 ;j <= n;j++) {
            cin >> b[i][j];
        }
    }
    memset(Xuoi,true,sizeof(Xuoi));
    memset(Nguoc,true,sizeof(Nguoc));
    memset(Cot,true,sizeof(Cot));
    maxVal = INT_MIN;
}
void in() {
    int tmp = 0;
    for (int i = 1 ;i <= n;i++) {
        tmp += b[i][x[i]];
    }
    maxVal = max(maxVal,tmp);


}
void Try(int i) {
    for (int j = 1;j<=n;j++) {
        if (Xuoi[i-j+n] && Nguoc[i+j-1] && Cot[j]) {
            x[i] = j;
            Xuoi[i-j+n] = Nguoc[i+j-1] = Cot[j] = false;
            if (i == n) {
                in();
            }
            else Try(i+1);
            Xuoi[i-j+n] = Nguoc[i+j-1] = Cot[j] = true;
        }

    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Try(1);
        cout << maxVal << endl;
    }
}