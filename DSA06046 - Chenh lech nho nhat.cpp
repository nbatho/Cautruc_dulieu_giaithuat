#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        int minVal = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int tmp = abs(a[i] - a[i + 1]);
            minVal = min(minVal, tmp);
        }
        
        cout << minVal << endl;
    }
}
