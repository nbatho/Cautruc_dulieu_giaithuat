#include<bits/stdc++.h>
using namespace std;
bool stop = false;
int n;
int a[1005];
bool check(int a[],int n) {
    int found = 0;
    for (int i = 1;i<n;i++) {
        if (a[i] == 0 && a[i+1] == 0) {
                found = 1;
                break;
        }
    }
    return (a[1] == 0 && a[n] == 1 && !found);
}
void sinh() {
    int i = n;
    while(i >=1 && a[i] == 0) {
        a[i] = 1;
        --i;
    }
    if (i == 0) stop = true;
    else {
        a[i] = 0;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        stop = false;
        for (int i = 1; i <= n; ++i) {
            a[i] = 1;
        }
        while (!stop) {
            if (check(a,n)) {
                for (int i = 1;i<=n;i++) {
                    if (a[i] == 0) cout << 'H';
                    else cout << 'A';
                }
            
                cout << endl;
            }
            sinh();
            
    }
    }
    return 0;
}