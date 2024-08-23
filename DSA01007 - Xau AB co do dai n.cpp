#include <bits/stdc++.h>
using namespace std;

int a[1005];
int n;
bool Last = false;

void ktao() {
    for (int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void sinh() {
    int i = n;
    while (i > 0 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i <= 0) Last = true;
    else {
        a[i] = 1;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {    
        cin >> n;
        Last = false; 
        ktao();
        while (!Last) { 
            for (int i = 1; i <= n; i++) {
                if (a[i] == 0) cout << 'A';
                else cout << 'B'; 
            }
            cout << " ";
            sinh();
        }
        cout << endl;
    }
}
