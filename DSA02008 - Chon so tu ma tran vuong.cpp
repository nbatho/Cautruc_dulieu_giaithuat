#include <bits/stdc++.h>
using namespace std;
int n,x;
int a[105];
bool stop =false;
int b[105][105];
vector <string> res;
void Init() {
    cin >> n >> x;
    stop = false;
    for (int i = 1;i<=n;i++) {
        a[i] = i;
    }
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=n;j++) {
            cin >> b[i][j];
        }
    }
}
void sinh() {
    int i = n-1;
    while (i > 0 && a[i] > a[i+1]) {
        i--;
    }
    if (i == 0) stop = true;
    else {
        int k =n;
        while (a[k] < a[i]) k--;
        swap(a[k],a[i]);
        reverse(a+i+1,a+n+1);
    }
}
bool check(int a[],int n) {
    int sum = 0;
    for (int i = 1 ;i <= n;i++) {
        sum +=b[i][a[i]];
    }
    return sum == x;
}
void solve() {
    Init();
    while (!stop) {
        string tmp ="";
        if (check(a,n)) {  
        for (int i =1 ;i<=n;i++) {
            tmp += to_string(a[i]) + " ";
            }    
        }
        if (!tmp.empty()) res.push_back(tmp);
        sinh();
    }
    cout << res.size() << endl;
    for (int i = 0 ;i < res.size();i++) {
        cout << res[i] << endl;
    }
}
int main() {
    solve();
}