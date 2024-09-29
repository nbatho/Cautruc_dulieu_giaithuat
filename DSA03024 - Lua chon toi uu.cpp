#include <bits/stdc++.h>
using namespace std;
struct Jobs{
    int start,finish;
};
bool cmp(Jobs a,Jobs b) {
    if (a.finish == b.finish) {
        return a.start > b.start;
    }
    else return a.finish < b.finish;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <Jobs> ds(n);
        for (int i = 0 ;i < n;i++) {
            cin >> ds[i].start >> ds[i].finish;
        }
        sort(ds.begin(),ds.end(),cmp);

        int i = 0 ,cnt = 1;

        for (int j = 1;j< n;j++) {
            if (ds[j].start >= ds[i].finish) {
                cnt++;
                i = j;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}