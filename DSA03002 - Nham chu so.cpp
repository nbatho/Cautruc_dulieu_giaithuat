#include <bits/stdc++.h>
using namespace std;
string So5 (string &s) {
    for (int i = 0 ;i <s.size();i++) {
        if (s[i] == '5') {
            s[i] = '6';
        }
    }
    return s;
}
string So6(string &s) {
    for (int i = 0 ;i <s.size();i++) {
        if (s[i] == '6') {
            s[i] = '5';
        }
    }
    return s;
}
int main() {
    string a,b;
    cin >> a >> b;
    
    int min = stoi(So6(a)) + stoi(So6(b));
    int max = stoi(So5(a)) + stoi(So5(b));
    cout << min << " " << max << endl;
}