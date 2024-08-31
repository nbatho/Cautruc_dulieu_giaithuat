#include <bits/stdc++.h>
using namespace std;
int n,k;
bool stop = false;
int a[1005];
void ktao() {
    for (int i = 1;i<=k;i++) {
        a[i] = i;
    }
}
void sinh() {
    int i = k;
    while (i > 0 && a[i] == n - k + i) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        a[i]++;
        for (int j = i+1;j<=k;j++) {
            a[j] = a[j-1] + 1;
        }
    }
}
int main() {
    int t;
    cin >> t >> k;
    stop = false;
    int tmp[1005];
    set <int> res;
    for (int i = 1;i<=t;i++) {
        int x; cin >> x;
        res.insert(x);
    }
    n = res.size();
    int index = 1;
    for (int x:res) {
        tmp[index++] = x;
    }
    ktao();
    while (!stop) {
        for (int i = 1;i<=k;i++) {
            cout << tmp[a[i]] << " ";
        }
        sinh();
        cout << endl;
    }
}