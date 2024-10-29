#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    map<int,int> mp;
    vector <int> a(n);
    for (int i = 0 ;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0 ;i < n;i++) {
        if (!mp[a[i]]) {
            cout << a[i] << " ";
            mp[a[i]] = 1;
        }
    }
}