#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1001];
bool stop = false;
void sinh() {
    int i = k;
    while(i>0 && a[i] == n-k+i) {
        --i;
    }
    if (i ==  0) stop = true;
    else {
        a[i] +=1;
        for (int j = i+1;j  <=k;j++) {
            a[j] = a[j-1] +1;
        }
    }
}
void solve() {
    cin >> n >> k;
    for (int i = 1 ;i<=k;i++) {
        a[i] = i;
    }
    stop = false;
    while (!stop) {
        
        for (int i = 1 ;i <=k;i++) {
            cout << a[i];
        }
        sinh();
        cout << " ";
    }
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve(); 
        cout << endl;
    }
}