#include <bits/stdc++.h>
using namespace std;
#define quick() ios_base::sync_with_stdio(false); cin.tie(NULL);
int main() {
    quick();
    int t;
    cin >> t;
    while (t--) {
        int n,m,k;
        cin >> n >> m >> k;
        int a[n],b[m],c[k];
        for (int i = 0;i < n;i++) cin >> a[i];
        for (int i = 0;i < m;i++) cin >> b[i];
        for (int i = 0;i < k;i++) cin >> c[i];
        int i = 0,j = 0 ,h = 0;
        bool found = false;
        while (i < n  && j < m && h < k) {
            if (a[i] == b[j] && b[j] == c[h]) {
                cout << a[i] << " ";
                i++;
                j++;
                h++;
                found =true;
            }
            else if (a[i] < b[j]) 
                i++;
            else if (b[j] < c[h])
                j++;
            else h++;
            
        }
        if (!found) {
                cout << "NO";
            }
        cout << endl;
    }
}