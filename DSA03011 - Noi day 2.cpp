#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        priority_queue<long long,vector <long long> ,greater<long long>> pq;
        for (int i = 0 ;i < n;i++) {
            long long x;cin >> x;
            pq.push(x);
        }
        long long cp = 0;
        while (pq.size() > 1) {
            long long First = pq.top(); pq.pop();
            long long Second = pq.top(); pq.pop();
            cp += First %MOD + Second%MOD;
            pq.push((First%MOD + Second %MOD)%MOD);
        }
        cout << cp%MOD << endl;
        
    }
}