#include <bits/stdc++.h>
using namespace std;
int n;
int k;
int a[50];
int b[50];
vector <vector<int>>res;
vector<string> result;
vector<int> tmp;
void Init() {
    cin >> n;
    for (int i = 1;i<=n;i++) {
        cin >> b[i];
    }
}
void Try(int i,int k) {
    for (int j = a[i-1] + 1;j<=n-k+i;j++) {
        a[i] = j;
        if (i == k) {
                tmp.clear();
                for (int l = 1;l<=k;l++) {
                    tmp.push_back(b[a[l]]);
                }
                res.push_back(tmp);
            }
            else Try(i+1,k);
    }
}
int main() {
    Init();
    for (int k = 2;k<n;k++) {
        Try(1,k);
    }
    for (int i = 0;i<res.size();i++) {
        bool found =true;
        for (int j = 0;j<res[i].size()-1;j++) {
            if (res[i][j] > res[i][j+1]) {
                found = false;
                break;
            }
        }
        if (found) {
            string s;
            for (int l = 0;l<res[i].size();l++) {
                s+= to_string(res[i][l]) + " ";
            }
            result.push_back(s);
        }
    }
    sort(result.begin(),result.end());
    for (int i = 0 ;i <result.size();i++) {
        cout << result[i] << endl;
    }
}