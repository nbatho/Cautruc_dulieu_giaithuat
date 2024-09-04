#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0 ;i<n;i++) cin >> a[i];
    for (int i = 0 ;i < n-1;i++) {
        int min_idx = i;
        for (int j = i+1;j<n;j++) {
            if (a[min_idx] > a[j]) 
                min_idx = j;
        }
        swap(a[i],a[min_idx]);
        cout << "Buoc " << i +1 << ": ";
        for (int k = 0 ;k<n;k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}