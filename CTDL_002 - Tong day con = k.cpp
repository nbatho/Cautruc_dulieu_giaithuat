#include <bits/stdc++.h>
using namespace std;
int n,k;
int t[1000]; // gia tri
int x[1000]; // danh dau
int cnt = 0;
vector <vector <int>> res;
void printResults() {
    vector <int> tmp;
    for (int l = 0;l<n;l++) {
    if (x[l]) tmp.push_back(t[l]);
        }
    res.push_back(tmp);
}
void Try(int i ,int sum) {
    for (int j = 0 ;j<=1;j++) {
        x[i] = j;
        sum = sum + x[i] * t[i];
        if (i == n-1) {
            if (sum == k) {
                printResults();
            }
        } else if (sum <= k ) Try(i+1,sum);
        sum = sum - x[i] * t[i];
    }
}
int main() {
    cin >> n >> k;
    for (int i = 0 ;i < n;i++) cin >> t[i];
    Try(0,0);
    for (int i = 0;i<res.size();i++) {
        for (int j = 0 ;j <res[i].size();j++) {
            cout << res[i][j] << " ";
        }
        cnt++;
        cout << endl;
    }
    cout << cnt;
}