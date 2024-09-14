#include <bits/stdc++.h>
using namespace std;
int n , k , s;
bool stop = false;
int a[25];
vector <string> res;
void Init() {
    for (int i = 1;i<=k;i++) {
        a[i] = i;
    }
}
void sinh() {
    int i = k ;
    while (i > 0 && a[i] == n-k+i) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        a[i]++;
        for (int j = i+1;j<=k;j++) {
            a[j] = a[j-1] +1;
        }
    }
}
bool check() {
    int sum = 0;
    for (int i = 1;i<=k;i++) 
        sum += a[i];       
    return sum == s;
}
void solve() {
    Init();
    stop = false;
    res.clear();
    while (!stop) {
        if (check()) {
            string tmp = "";
            for (int i = 1;i<=k;i++) {
                tmp +=to_string(a[i]);
            }
            if (!tmp.empty()) res.push_back(tmp);
        }
        sinh();
    }
    cout << res.size() << endl;
}
int main() {
    while (cin >> n >> k >> s) {
        if (n < k) cout << 0 << endl;
        else if (n == 0 && k == 0 && s == 0) return 0;
        else {
            solve();
        }
    }
}