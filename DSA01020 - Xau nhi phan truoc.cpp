#include <bits/stdc++.h>
using namespace std;
int a[1005];
string x;
void sinh() {
    for (int i = 0 ;i < x.size();i++) {
        a[i] = x[i] - '0';
    }
    int i = x.size() - 1;
    while (i >= 0 && a[i] == 0) {
        a[i] = 1;
        --i;
    }
    if (i >= 0) {
        a[i] = 0;
    }
    for (int i = 0 ;i < x.size();i++) {
        cout << a[i];
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