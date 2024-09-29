#include <bits/stdc++.h>
using namespace std;
/*
    giai thich test 
    1234567
    so sanh s[i] voi s[j] voi j chay tu i+1 - > s.size() , k -1 
    s[i] == max thi k ko doi 
    
*/
int k,n;
string s;
string ans;
void Try(int i,int k) {
    if (k == 0 || i > n) {
        return;
    }
    char MaxC = s[i];
    for (int j = i+1 ;j <= n;j++) 
        MaxC = max(MaxC,s[j]);
    if (s[i] == MaxC) Try(i+1,k);
    else {
        for (int j = i+1 ;j <= n;j++) {
            if (s[j] == MaxC) {
                swap(s[i],s[j]);
                ans = max(ans,s);
                Try(i+1,k-1);
                swap(s[i],s[j]);
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> k >> s;
        n = s.size() - 1;
        ans = s;
        Try(0,k);
        cout << ans << endl;
    }
}