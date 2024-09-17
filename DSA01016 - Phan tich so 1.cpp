#include <bits/stdc++.h>
using namespace std;
int n,a[100];
bool stop = false;
int k;
vector <vector <int>>res;
void ktao() {
    k = 1;
    a[k] = n;
    res.clear();
}
void sinh() {
    int i = k;
    while (i > 0 && a[i] == 1) {
        --i;
    }
    if (i == 0) stop = true;
    else {
        a[i]--;
        int d = k - i + 1;  // phan bu con thieu , +1 do vua -a[i]
        int r = d / a[i]; // Xem d gap may lan a[i]
        int s = d % a[i]; // xem phan du 
        k = i;
        if (r > 0) {
            for (int j = 1;j<=r;j++) {
                k++;
                a[k] =a[i];
            }
        }
        if (s > 0) {
            k++;
            a[k] = s;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        ktao();
        stop = false;
        while (!stop) {
            vector <int> tmp;
            for (int i = 1;i<=k;i++) {
                tmp.push_back(a[i]);
            }
            res.push_back(tmp);
            sinh();
        }
        for (int i = 0 ;i< res.size();i++) {
            cout << "(";
            for (int j = 0 ;j < res[i].size();j++) {
                cout << res[i][j];
                if (j < res[i].size() - 1) cout << " ";
            }
            cout <<") ";
        }
        cout << endl;
    }
}