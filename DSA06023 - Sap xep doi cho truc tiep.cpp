#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0 ;i <n;i++) 
        cin >> a[i];
    for (int i = 0 ;i <n;i++) {
        bool swapped = false;
        for (int j = i+1;j<n;j++) {
            if (a[j] < a[i]) swap(a[j],a[i]);
            swapped = true;
        }
        if (swapped) {
            cout << "Buoc " << i +1 << ": ";
            for (int k = 0 ;k<n;k++) {
                cout << a[k] << " ";
            }
            cout << endl;
        }
        
    }
}