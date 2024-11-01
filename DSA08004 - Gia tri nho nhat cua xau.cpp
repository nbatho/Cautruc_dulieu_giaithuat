#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        priority_queue<int> pq;
        int chu[128] = {0}; 
        for (int i = 0; i < s.size(); i++) 
            chu[s[i]]++;
        for (int i = 0; i < 128; i++) {
            if (chu[i] > 0) 
                pq.push(chu[i]);
        }
        while (k--) {
            if (!pq.empty()) {
                int x = pq.top();pq.pop();
                if (x > 1) {
                    pq.push(x-1);
                }    
            }
        }
        long long ans = 0;
        while (!pq.empty()) {
            long long x = pq.top();
            pq.pop();
            ans += x * x;
        }
        cout << ans << endl;
    }
    return 0;
}
