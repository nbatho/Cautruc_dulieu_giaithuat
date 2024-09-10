#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        vector <int > res;
        int sum = INT_MAX;
        for (int i = 0 ;i < n;i++) cin >> a[i];
        for (int i =0 ;i < n-1;i++) {
            for (int j = i+1 ;j < n;j++){
                if (abs(a[i] + a[j]) < abs(sum))
                    sum = a[i] + a[j];
            }
        }
        cout << sum;
        cout << endl;
    }
}