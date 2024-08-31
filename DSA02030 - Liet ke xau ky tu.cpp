#include <bits/stdc++.h>
using namespace std;

char c;
int k;
int a[10];

void in() {
    for (int i = 1; i <= k; i++) {
        cout << char(a[i] +64);
    }
    cout << endl;
}

void Try(int i) {
    int j;
    if (i == 1) {
        j = 1;
    }
    else {
        j = a[i-1];
    }
    for ( j; j <= c - 'A' + 1; j++) {
        a[i] = j;
        if (i == k) {
            in();
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    cin >> c >> k;
    Try(1);
    return 0;
}