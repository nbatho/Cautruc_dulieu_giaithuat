#include <bits/stdc++.h>
using namespace std;
/*
    a so luong so 4
    b so luong so 7
    a*4 + b*7 = n
    a = (n-7b)/4
    b = (n-4a)/7
*/
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int count4 = INT_MAX, count7 = -1;
        bool found = true;
        for (int i = 0 ;i*7 <= n;i++) {
            int sum4 = n - 7*i;
            int sum7;
            if (sum4 % 4 == 0) {
                count4 = min(count4,sum4/4);
                break;
            }
        }
        for (int i = 0 ;i*4 <= n;i++) {
            int sum7 = n - 4*i,sum4;
            if (sum7 %7 == 0) { 
                sum4 = n- sum7;
                count4 = min(count4,sum4/4);
                break;
            }
            
        }
        count7 = (n-count4*4)/7;
        if (count4 == INT_MAX) {
            cout << -1;
        }
        else {  
            while (count4--) cout << 4;
            while (count7--) cout <<7;
        } 
        cout << endl;

    }
    return 0;
}