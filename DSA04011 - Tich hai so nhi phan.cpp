#include <bits/stdc++.h>
using namespace std;
int Convert(string s) {
    long long res = 0;
    for (int i = 0 ;i < s.size();i++) {
        res += pow(2,s.size() - 1 - i) * (s[i] - '0');
    }
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1,s2;
        cin >> s1 >> s2;
        cout << (long long )Convert(s1) * Convert(s2) << endl;
    }
}