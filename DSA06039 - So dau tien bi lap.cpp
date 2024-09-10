#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        map <int,int> res;
        bool found = false;
        for (int i = 0 ;i < n;i++) 
        {
            cin >> a[i];
            res[a[i]]++;
        }
        for (int i = 0 ;i < n;i++) {
            if (res[a[i]] > 1) {
                cout << a[i] << endl;
                found = true;
                break;
            }
        }
        if (found == false) cout << "NO" << endl;  
    }
}