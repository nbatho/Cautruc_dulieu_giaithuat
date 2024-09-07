#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        vector <vector <int>> res;
        vector <int> tmp;
        for (int i = 0 ;i<n;i++) cin >> a[i];
        for (int i = 0;i<n-1;i++) {
            bool swapped = false;
            for (int j = 0;j<n-i-1;j++) {
                if (a[j] > a[j+1]) {
                    swap(a[j],a[j+1]);
                    swapped = true;
                }
            }
            if (swapped) {
                for (int k = 0 ;k<n;k++) {
                    tmp.push_back(a[k]);
                }
                res.push_back(tmp);
                tmp.clear();
            }
        }
        for (int i = res.size() - 1;i >=0;i--) {
            cout << "Buoc " << i +1 << ": ";
            for (int j = 0 ;j<res[i].size();j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
}