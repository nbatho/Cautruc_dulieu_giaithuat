#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> tmp(n);
        for (int i = 0 ;i < n;i++) {
            cin >> tmp[i];
            a[i] = tmp[i];
        }
        sort(tmp.begin(),tmp.end());
        int l = 0,r = n-1;
        while (l <n && a[l] == tmp[l]) {
            l++;
        }
        while (r >= 0 && a[r] == tmp[r]) {
            r--;
        }
        if (l > r) 
            cout << 0 << " " << 0 << endl;
        else 
            cout << l + 1 << " " << r + 1<< endl;
    }
}