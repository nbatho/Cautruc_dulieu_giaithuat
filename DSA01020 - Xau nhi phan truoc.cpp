#include <bits/stdc++.h>
using namespace std;

int a[1005];
string x;

void sinh() {
    for (int i = 0; i < x.size(); i++) {
        a[i] = x[i] - '0';
    }
    int i = x.size() - 1;
    while (i >= 0 && a[i] == 0) --i;

    if (i < 0) {
        for (int i = 0; i < x.size(); i++) {
            cout << 1;
        }
    } else {
        a[i] = 0;
        for (int j = i + 1; j < x.size(); j++) {
            a[j] = 1;
        }
        for (int j = 0; j < x.size(); j++) {
            cout << a[j];
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) { 
        cin >> x;
        sinh();    
        cout << endl;
    }
}
