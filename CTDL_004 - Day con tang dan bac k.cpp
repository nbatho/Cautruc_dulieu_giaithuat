#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[25];
int b[25];
int cnt =0;
vector <vector<int>>res;
vector<int> tmp;
void Init() {
    cin >> n >> k;
    for (int i = 1;i<=n;i++) {
        cin >> b[i];
    }
}
void Try(int i) {
    for (int j = a[i-1] +1 ;j<=n-k+i;j++) {
            a[i] = j;
            if (i == k) {
                tmp.clear();
                for (int l = 1;l<=k;l++) {
                    tmp.push_back(b[a[l]]);
                }
                res.push_back(tmp);
            }
            else Try(i+1);
            
    }
}
int main() {
    Init();
    Try(1);
    for (int i = 0;i<res.size();i++) {
        bool found =true;
        for (int j = 0;j<res[i].size()-1;j++) {
            if (res[i][j] > res[i][j+1]) {
                found = false;
                break;
            }
        }
        if (found) {
            cnt++;
        }
    }
    cout << cnt << endl;
}