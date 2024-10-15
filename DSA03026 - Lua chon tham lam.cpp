#include <bits/stdc++.h> 
using namespace std; 
string maxVal(int n, int s) {
    string res = "";
    for (int i = 0; i < n; i++) {
        if (s > 9) {
            res += '9';
            s -= 9;
        } else {
            res += to_string(s);
            s = 0; 
        }
    }
    while (res.length() < n) {
        res += '0';
    }
    return res;
}
string minVal(int n,int s) {
    string res(n,'0');
    res[0] = '1'; s--;
    for (int i = n-1;i>=0;i--) {
        res[i] += min(s,9);
        s -=min(s,9);
        if (s==0) break;
    }
    return res;
}
int main() {
    int n,s;
    cin >> n >> s;
    if (s == 0 && n > 1) {
        cout << -1 << " " << -1;
        return 0;
    }
    if (s > 9 * n) {
        cout << -1 << " " << -1;
        return 0;
    }
    cout << minVal(n,s) << " " << maxVal(n,s);
    cout << endl;
    return 0;
}