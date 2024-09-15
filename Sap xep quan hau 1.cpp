#include <bits/stdc++.h>
using namespace std;
int n;
bool xuoi[30],nguoc[30],cot[15];
int a[15];
int cnt;
void Init() {
    cin >> n;
    memset(xuoi,true,sizeof(xuoi));
    memset(nguoc,true,sizeof(nguoc));
    memset(cot,true,sizeof(cot));
    cnt =0;
}
void Try(int i) {
    for (int j = 1;j<=n;j++) {
        if (xuoi[i-j+n] && nguoc[i+j-1] && cot[j]) {
            a[i]  = j;
            xuoi[i-j+n] = nguoc[i+j-1] = cot[j] = false; // đánh dấu đã dùng
            if (i == n) cnt++;
            else Try(i+1);
            xuoi[i-j+n] = nguoc[i+j-1] = cot[j] = true; // bỏ đánh dấu
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        Try(1);
        cout << cnt << endl;
    }
}