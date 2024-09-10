#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2;i *i<=n;i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool found = false;
        for (int i = 2;i<=n;i++) {
            if (isPrime(i) && isPrime(n- i)) {
                cout << i << " " << n -i;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1;
        }
        cout << endl;
    }
}