#include <bits/stdc++.h>
using namespace std;
/*
    đếm số ký tự lặp
    mỗi lần biến đổi k 
    -1 ký tự lặp nhiều nhất
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k; string s;
        cin >> k >> s;
        map <char,int> mp;
        for (int i = 0;i<s.size();i++) mp[s[i]]++;
        vector <int> Solanlap;
        for (auto i:mp) {
            Solanlap.push_back(i.second);
        }
        while (k > 0) {
            sort(Solanlap.begin(),Solanlap.end());
            Solanlap[Solanlap.size() - 1]--;
            k--;
        }
        long long sum = 0;
        for (int i = 0 ;i < Solanlap.size();i++) {
            sum += Solanlap[i]*Solanlap[i];
        }
        cout << sum << endl;
    }
}