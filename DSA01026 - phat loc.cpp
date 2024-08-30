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
        if (a[i] == 1 && a[i+1] == 1 &&a[i+2]==1 && a[i+3]== 1) {
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
        cin >> n;
        stop = false;
        for (int i = 1; i <= n; ++i) {
            a[i] = 1;
        }
        while (!stop) {
            if (check(a,n)) {
                for (int i = 1;i<=n;i++) {
                    if (a[i] == 0) cout << '8';
                    else cout << '6';
                }
            
                cout << endl;
            }
            sinh();
            
    }
    return 0;
}