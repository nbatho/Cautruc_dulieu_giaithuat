#include <bits/stdc++.h>
using namespace std;
struct Ox {
    int x1,x2;
};
bool cmp(Ox a,Ox b) {
    if (a.x2 == b.x2) 
        return a.x1 > b.x1;
    else return a.x2 < b.x2;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Ox td[n];
        for (int i = 0 ;i < n;i++) {
            cin >> td[i].x1 >> td[i].x2;
        }
        sort(td,td+n,cmp);
        int i = 0 ,cnt= 1;
        for (int j = 1;j< n;j++) {
            if (td[j].x1 >= td[i].x2) {
                cnt++;
                i = j;
            }
        }
        cout << cnt << endl;    
    }
}