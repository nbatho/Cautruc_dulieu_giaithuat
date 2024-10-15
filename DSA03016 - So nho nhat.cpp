#include <bits/stdc++.h>
using namespace std;
/*
    vd 34 7 
    34 - 9 = 25 d =6    st = [9 ]
    25 - 9 = 16 d = 5   st = [9 9]
    16 - 9 = 7  d = 4   st = [9 9 9]
    7 < 9 =>    d = 3   st = [9 9 9 7]
    d > 0 => st.pop = 7 , st.push(7-1) => st = [9 9 9 6] , d = 3
    d = 3 > 1 => st.push(0) => st = [9 9 9 6 0 ] d--
    d = 2 > 1 => st.push(0) => st = [9 9 9 6 0 0] d--
    d =1 > 0 => st.push(1) => st [9 9 9 6 0 0 1]
*/
int main() {
    int t;cin >> t;
    while (t--) {
        int s,d;
        cin >> s >> d;
        stack<int> st;
        while (s > 0) {
            d--;
            if (s > 9) {
                st.push(9);
                s -=9;
            }
            else {
                st.push(s);
                break;
            }
        }
        if (d < 0) cout << -1 << endl;
        else {
            if (d > 0) {
                int so = st.top();
                st.pop();
                st.push(so-1);
                while  (d > 1) {
                    st.push(0);
                    d--;
                }
                st.push(1);
            }
            while (st.size() > 0) {
                cout << st.top();
                st.pop();
            }
        }
        cout << endl;
    }
    return 0;
}