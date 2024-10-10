#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i =0 ;i < n;i++) {
            cin >> a[i];
        }
        int pos = -1;
        for (int i = 0 ;i < n-1;i++) {
            int x;
            cin >> x;
            if (x != a[i] && pos == -1) {
                pos = i+1;
            }
        }
        cout << pos << endl;
    }

    return 0;
}
