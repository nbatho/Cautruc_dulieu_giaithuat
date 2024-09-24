#include <bits/stdc++.h>
using namespace std;
struct data {
    int s,f;
};
data cv[1005];
bool cmp(data a,data b) {
    return a.f < b.f;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0 ;i < n;i++) {
            cin >> cv[i].s;
        }
        for (int i = 0 ;i < n;i++) {
            cin >> cv[i].f;
        }
        sort(cv,cv+n,cmp);
        int i = 0,cnt =1;
        for (int j = 1;j< n;j++) {
            if (cv[j].s >= cv[i].f) {     
                cnt++;
                i = j;
            }
        }
        cout << cnt << endl;
    }
}