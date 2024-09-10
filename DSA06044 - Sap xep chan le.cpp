#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b)
{
	return a > b;
}
int main() {
    int n;
    cin >> n;
    int a[n+1];
    vector <int> chan,le;
    for (int i = 1 ;i <= n;i++) {
        cin >> a[i];
        if (i % 2== 0) {
            chan.push_back(a[i]);
        }
        else {
            le.push_back(a[i]);
        }
    }
    sort(chan.begin(),chan.end(),cmp);
    sort(le.begin(),le.end());
    int index_chan = 0,index_le = 0;
    for (int i = 1 ;i<= n;i++) {
        if (i %2 ==0) {
            cout << chan[index_chan++] << " ";
        }
        else {
            cout << le[index_le++] << " ";
        }
    }
}