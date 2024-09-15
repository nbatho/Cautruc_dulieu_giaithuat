#include <bits/stdc++.h>
using namespace std;
int n;
int a[15];
bool used[15];
vector <vector<int>> res;
void ktao() {
    cin >> n;
    for (int i = 1;i<=n;i++) {
        a[i] = i;
    }
    res.clear();
    memset(used,false,sizeof(used));
}
bool check(vector <int> &tmp) {
    bool found = true;
    for (int i = 0 ;i < tmp.size() -1 ;i++) {
        if (abs(tmp[i+1] - tmp[i]) == 1) {
            found = false;
        }
    }
    return found;
}
void Try(int i) {
    for (int j = 1;j<=n;j++) {
        if (!used[j]) {
            a[i] = j;
            used[j] = true;
            if (i == n) {
                vector <int> tmp;
                tmp.clear();
                for (int l =  1;l<=n;l++) {
                    tmp.push_back(a[l]);
                }
                if (check(tmp)) {
                    res.push_back(tmp);
                }
            }
            else Try(i+1);
            used[j] = false;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ktao();
        Try(1);
        sort(res.begin(),res.end());
        for (int i = 0 ;i <res.size();i++) {
            for (int j = 0 ; j <res[i].size();j++) {
                cout << res[i][j];
            }
            cout << endl;
        }
    }
}