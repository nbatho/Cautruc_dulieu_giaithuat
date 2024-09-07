#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,j; cin >> n;
    int a[n];
    vector <vector<int>>res;
    vector <int> tmp;
    int first;
    for (int i = 0 ;i<n;i++) {
        cin >> a[i];
        first = a[0];
    }
    for (int i = 1;i<n;i++) {
        int key = a[i];
        j = i-1;
        while (j >=0 && a[j] > key) {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
        for (int k = 0 ;k<=i;k++) {
            tmp.push_back(a[k]);
        }
        res.push_back(tmp);
        tmp.clear();
    }
    for (int i = res.size() - 1;i>=0;i--) {
        cout << "Buoc " << i + 1 << ": ";
        for (int j = 0 ;j < res[i].size();j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
        
    }
    cout << "Buoc " << 0 << ": " << first << endl;
}