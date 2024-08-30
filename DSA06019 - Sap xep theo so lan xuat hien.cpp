#include<bits/stdc++.h>
using namespace std;
int d[100001] ={0};
bool cmp(int a,int b) {
    if (d[a] == d[b]) {
        return a< b;
    }
    return d[a] > d[b];
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0 ;i < n;i++) {
            cin >> a[i];
            d[a[i]]++;
        }
        sort(a,a+n,cmp);
        for (int i = 0 ;i < n;i++) {
            while (d[a[i]]--) {
                cout << a[i] << " ";
            }
            d[a[i]] =0;
        }
        cout << endl;
    }
}