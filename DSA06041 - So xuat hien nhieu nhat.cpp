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
        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
            res[a[i]]++;
        }
        int maxVal = INT_MIN;
        bool found = false;
        for (auto i:res) {
            if (i.second > n/2 && max(i.second,maxVal))
            {
                cout << i.first << endl;
                found = true;
            }   
            
        }
        if (!found ) {
                cout << "NO" << endl;
            }
    }
}