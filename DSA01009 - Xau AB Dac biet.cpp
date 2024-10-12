#include<bits/stdc++.h>
using namespace std;

bool stop = false;
int n,k;
int a[1005];

bool check(int a[], int n) {
    int kytulap = 0 , res = 0;
    for (int i = 1;i<=n;i++) {
        if (a[i] == 0) {
            kytulap++;
        }
        else {
            kytulap =0;
        }
        if (kytulap == k) {
            res++;
        }
        if (kytulap > k) return false;
    }
    return res == 1;
}

void sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        --i;
    }
    if (i == 0) {
        stop = true;
    } else {
        a[i] = 1;
    }
}

int main() {
    cin >> n >> k;
    stop = false;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] = 0;
    }
    while (!stop) {
        if (check(a, n)) {
            cnt++;
        }
        sinh();
    }
    cout << cnt << endl;
    stop = false;
    while (!stop) {
        sinh();
        if (check(a, n)) {
            for (int i = 1; i <= n; i++) {
                if (a[i] == 0) {
                    cout << 'A';
                }
                else cout << 'B';
            }
            cout << endl;
        }
    }
    return 0;
}
