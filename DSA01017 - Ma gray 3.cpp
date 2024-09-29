#include <bits/stdc++.h>
using namespace std;
/*
    np[0] = gray[0]
    gray 

    gray[i-1] != gray[i] np +=1
    else np += 0
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s,np ="";
        cin >> s;
        np = s[0];
        for (int i = 1;i < s.size();i++) {
            if (s[i-1] !=s[i]) {
                np +='1';
            }
            else np +='0';
        }
        cout << np << endl;
    }
}