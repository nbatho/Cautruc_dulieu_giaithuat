#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector <int> a(n);
        deque <int> dq;
        for (int i = 0;i < n;i++) cin >> a[i];
        for (int i = 0 ;i < n;i++) {
            while (dq.size() && a[dq.back()] <= a[i]) dq.pop_back();

            dq.push_back(i);

            if (dq.front() + k <=i) dq.pop_front();
            if (i +1 >= k ) cout << a[dq.front()] << " ";
        }
        cout << endl;
    }
}