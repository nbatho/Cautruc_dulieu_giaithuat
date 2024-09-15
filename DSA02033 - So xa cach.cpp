#include <bits/stdc++.h>
using namespace std;

int n;
int a[15];
bool used[15];

void ktao() {
    cin >> n;
    memset(used, false, sizeof(used));
}

bool check() {
    for (int i = 1; i < n; i++) {
        if (abs(a[i+1] - a[i]) == 1) {
            return false;
        }
    }
    return true;
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!used[j]) {
            a[i] = j;
            used[j] = true;
            if (i == n) {
                if (check()) {
                    for (int l = 1; l <= n; l++) {
                        cout << a[l];
                    }
                    cout << endl;
                }
            } else {
                Try(i + 1);
            }
            used[j] = false;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ktao();
        Try(1);
    }
}
