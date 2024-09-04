#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;
    cin >> n >> m;
    int  a[n], b[m];
    map <int,int> Union,Intersection,Tmp;
    for (int i = 0 ;i <n;i++) {
        cin >> a[i];
        Union[a[i]]++;
        Tmp[a[i]]++;
    }
    for (int i = 0 ;i <m;i++){
        cin >> b[i];
        Union[b[i]]++;
        Intersection[b[i]]++;
    }
    for (auto i:Union) {
        cout << i.first << " ";
    }
    cout << endl;
    for (auto i:Tmp) {
        if (Intersection[i.first] > 0) {
            cout << i.first << " ";
        }

    }
    cout << endl;
    
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}