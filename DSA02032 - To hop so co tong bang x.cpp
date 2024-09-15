#include <bits/stdc++.h>
using namespace std;
int n,x,sum;
int a[25];
vector <vector <int>> res;
void Init() {
    cin >> n >> x;
    for (int i = 1;i<=n;i++) {
        cin >> a[i];
    }
    res.clear();
    sum =0;
}
void Try(int i,vector <int> &tmp) {
    if (sum > x) return;
    if (sum == x) {
        res.push_back(tmp);
        return;
    }
    for (int j = i;j<=n;j++) {
        if (sum <x) {
            sum += a[j];
            tmp.push_back(a[j]);
            Try(j,tmp);
            // backtrack
            tmp.pop_back();
            sum -=a[j];
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        vector <int> tmp;
        tmp.clear();
        Try(1,tmp);
        if (res.size() == 0) {
            cout << -1 << endl;
        }
        else {    
            cout << res.size() << " ";
            for (int i = 0 ;i <res.size();i++) {
                cout << "{";
                for (int j = 0;j<res[i].size();j++) {
                    cout << res[i][j];
                    if (j < res[i].size() - 1) {
                        cout << " ";
                    }
                    else {
                        cout << "} ";
                    }
                }
            }
        }
        cout << endl;
    }
}