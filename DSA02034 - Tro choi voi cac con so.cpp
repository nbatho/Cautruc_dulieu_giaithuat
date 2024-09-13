#include <bits/stdc++.h>
using namespace std;
int n;
int a[15];
int used[15] ={false};
vector <vector <int>> res;
bool check(vector <int> &tmp) {
    bool found = false;
    for (int i = 0 ;i < tmp.size() - 1;i++) {
        if (abs(tmp[i+1] - tmp[i]) == 1) {
            found = true;
        }
    }
    return !found;
}
void Try(int i ) {
    for (int j = 1;j<=n;j++) {
        if(!used[j]) {
            a[i] = j;
            used[j] = true;
            if (i == n) {
                vector <int> tmp;
                for (int i = 1;i<=n;i++) {
                    tmp.push_back(a[i]);
                }
                if(check(tmp) && !tmp.empty()) {
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
        cin >> n;
        memset(used,false,sizeof(used));
        res.clear();
        for (int i =1;i<=n;i++) {
            a[i] = i;
        }
        Try(1);
        for (int i = 0;i<res.size();i++) {
            for (int j = 0 ;j < res[i].size();j++) {
                cout << res[i][j];
            }
            cout << endl;
        }
    }
}