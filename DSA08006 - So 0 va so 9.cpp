#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        queue<string> q;
        q.push("9");
        while (!q.empty()) {
            string s = q.front();
            q.pop();
            int num = 0;
            for (int i = 0 ;i < s.size();i++) {
                num = num*10 + (s[i]-'0');
            }
            if (num%n == 0) {
                cout << num << endl;
                break;
            }
            q.push(s + "0");
            q.push(s + "9");
        }
        
        
    }
}