#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        long long res = 0;
        for (int i = 0 ;i < s.size();i++) {
            string tmp ="";
            for (int j = i ;j < s.size();j++) {  
                tmp += s[j];
                res += stoll(tmp);
            }
        }
        cout << res << endl;
    }
}