#include<bits/stdc++.h>
using namespace std;
bool stop = false;
int n;
int a[1005];
bool palindrome(int a[],int n) {
    for (int i = 1;i<=n/2;i++) {
        if (a[i] != a[n-i+1]) {
            return false;
        }
    }
    return true;
}
void sinh() {
    int i = n;
    while(i >0 && a[i] == 1) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        a[i] = 1;
        for (int j = i+1;j<=n;j++) {
            a[j] = 0;
        }
    }
}
int main() {
    cin >> n;
    stop = false;
    for (int i = 1;i <=n;i++) {
        a[i] = 0;
    }
    int res[n];
    while (!stop) {
        if (palindrome(a,n)) {
            for (int i = 1;i<=n;i++) {
            cout << a[i] << " ";
            }
           
            cout << endl;
        }
         sinh();
        
    }
}