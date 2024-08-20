#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[15];
void in() {
    for (int i = 1 ;i <= k;i++) {
        cout << a[i];     
    }
}
void BackTrack(int i) {
    for (int j = a[i-1]+1;j<=n-k+i;j++) {
        a[i] = j;
        if (i == k) {
            in();
            cout << " ";
        }
        else BackTrack(i+1);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        BackTrack(1);
        cout << endl;
    }
}