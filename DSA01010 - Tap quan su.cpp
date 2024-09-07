#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[50];
int b[50];
bool stop =false;
int cnt =0;
void sinh() {
    int i = k;
    while (i >= 1&& a[i] == n-k+i) {
        --i;
    }
    if (i == 0) {
        stop =true;
    }
    else {
        a[i]++;
        for (int j = i+1;j<=k;j++) {
            a[j] = a[j-1] +1;
        }   
        
    }
}
void in() {
    cnt =0;
    for (int i = 1;i <=k;i++) {
        for (int j = 1;j<=k;j++) {
            if (a[i] == b[j]) {
                cnt++;
            }
        }
    }
    cout << k-cnt;
}
void Init() {
    cin >> n >> k;
    for (int i = 1;i<=k;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        sinh();
        if (stop) {
            cout << k << endl;
            stop = false;
        }
        else {
            in();
            cout << endl;
        }
    }
}