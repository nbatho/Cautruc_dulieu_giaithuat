#include <bits/stdc++.h>
using namespace std;
int n;
int a[15];
bool used[15] = {false};
void in() {
    for (int i = 1;i <=n;i++) {
        cout << a[i];
    }
    cout << " ";
}
void BackTrack(int i) {
    for (int j = n;j>=1;j--) {
        if (!used[j]) {
            a[i] = j;
            used[j] = true;
            if (i == n) in();
            else BackTrack(i+1);
            used[j] = false;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        BackTrack(1);
        cout << endl;
    }
}