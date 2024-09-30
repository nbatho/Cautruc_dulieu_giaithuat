#include <bits/stdc++.h>
using namespace std;
/*
    chon 2 day co do dai ngan nhat + vs nhau
    4
    4 3 2 6
    sort = 2 3 4 5
    2 + 3 => 6 4 5
    4 + 5 = > 6 9 
    6 + 9 = 15 
    => chi phi = 5 + 9 + 15 = 29

*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector <int> a(n);
        priority_queue<long long,vector <long long>,greater<long long>> pq;

        for (int i = 0 ;i < n;i++) {
            long long x ;
            cin >> x;
            pq.push(x);
        }
        long long cp = 0;
        while (pq.size() > 1) {
            long long First = pq.top();pq.pop();
            long long Second = pq.top(); pq.pop();
            cp += First + Second;
            pq.push(First + Second);
        }
        cout << cp << endl;
    }
}