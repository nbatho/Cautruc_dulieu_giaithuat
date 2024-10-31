#include <bits/stdc++.h>
using namespace std;
int n,w;
int a[105], c[105] , x[105];
bool stop = false;
int fopt = INT_MIN;
vector <int> ans;
void Init() {
    cin >> n >> w;
    for (int i = 1 ;i <= n;i++) {
        cin >> c[i];
    }
    for (int i = 1 ;i <= n;i++) {
        x[i] = 0;
        cin >> a[i];
    }
    stop = false;
    fopt = INT_MIN;
    ans.clear();
}
void sinh() {
    int i = n;
    while (i >= 0 && x[i] ==  1) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        x[i] = 1;
        for (int j = i+1;j<=n;j++) {
            x[j] = 0;
        }
    }
}

bool check(int a[]) {
    bool ok = false;
    int num = 0;
    for (int i = 1 ;i <= n;i++) {
        num += a[i] * x[i];
    }
    return num <= w;
}
int main() {
    Init();
    while (!stop) {
        if (check(a)) { 
            vector <int> d;
            int tmp = 0;
            for (int i = 1;i<=n;i++) {
                tmp += c[i] * x[i];
            }
            if (tmp > fopt) {
                fopt = tmp;
                ans.clear();
                for (int i = 1;i<=n;i++) {
                    ans.push_back(x[i]);
                }
            }
        }
        sinh();
    }
    cout << fopt << endl;
    for (int i = 0;i<ans.size();i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}