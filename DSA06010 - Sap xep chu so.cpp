#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int n;
        cin >> n;
        set <int> res;
        while (n--) {
            cin >> s;
            for (int i = 0 ;i < s.size();i++) {
                int tmp = s[i] - '0';
                res.insert(tmp);
            }   
           
        }
        for (auto i:res) {
            cout << i << " ";
        }
        res.clear();
        cout << endl;
    }
}