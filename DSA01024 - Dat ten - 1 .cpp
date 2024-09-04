#include <bits/stdc++.h>
using namespace std;

int n, k;
bool used[20] = {0};
vector<string> res(n+1);
int a[25];

void in() {
    for (int i = 1; i <= k; i++) {
        cout << res[a[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = a[i-1] + 1; j <= res.size()-1- k+ i; j++) {
            a[i] = j;
            if (i == k)
                in();
            else
                Try(i + 1);   
    }
}

int main() {
    cin >> n >> k;
    set<string> d;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        d.insert(s);
    }
    for (auto i : d) {
        res.push_back(i);
    }
    Try(1);
}
