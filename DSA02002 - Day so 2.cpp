#include <bits/stdc++.h>
using namespace std;
vector <vector <int> > res;
int n;
int a[15];

void Try(int a[],int n) {
    vector <int> tmp;
    int temp[n+1];
    if (n < 1) return ;
    for (int i = 0;i<n - 1;i++) {
        temp[i] = a[i] + a[i+1];
        tmp.push_back(temp[i]);
    }
    res.push_back(tmp);
    Try(temp,n-1);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        res.clear();
        vector <int> tmp;
        for (int i = 0;i<n;i++) {
            cin >> a[i];
            tmp.push_back(a[i]);
        }
        res.push_back(tmp);
        Try(a,n);
        for (int i = res.size() - 2;i >= 0;i--) {
            cout << "[";
            for (int j = 0 ;j<res[i].size();j++) {
                cout << res[i][j];
                if (j !=res[i].size() - 1) {
                    cout << " ";
                }
                else {
                    cout << "]"<< " ";
                }
            }
           
        }
        cout << endl;
    }
    return 0;
}