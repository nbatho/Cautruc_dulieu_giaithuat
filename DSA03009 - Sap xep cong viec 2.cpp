#include <bits/stdc++.h>
using namespace std;
struct Jobs {
    int JobId,Deadline,Profit;
};
bool cmp(Jobs a,Jobs b) {
    if (a.Profit == b.Profit) {
        return a.Deadline > b.Deadline;
    }
    else return a.Profit > b.Profit;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<Jobs> ds(n);
        for (int i = 0;i<n;i++) {
            cin >> ds[i].JobId >> ds[i].Deadline >> ds[i].Profit;
        }
        sort(ds.begin(),ds.end(),cmp);

        vector <bool> slot(n,false);
        int cnt = 0;
        int sum = 0;
        for (int i = 0 ;i < n;i++) {
            for (int j = min(ds[i].Deadline,n);j > 0 ;j--) // j so dealine con kha dung , tranh RTE do th n < ds[i].Dealine
            {
                if (!slot[j]) {
                    slot[j] = true;
                    cnt++;
                    sum += ds[i].Profit;
                    break;
                }
            }
        }
        cout << cnt << " " << sum << endl;
    }
}