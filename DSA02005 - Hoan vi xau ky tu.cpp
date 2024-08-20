#include <bits/stdc++.h>
using namespace std;
string n;
int a[15];
bool used[15] = {false};
void in() {
    for (int i = 0;i<n.size();i++) {
        cout << n[a[i]];
    }
    cout << " ";
}
void BackTrack(int i) {
    for (int j = 0;j<n.size();j++) {
        if (!used[j]) {
            a[i] = j;
            used[j] = true;
            if (i == n.size() - 1) in();
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
        BackTrack(0);
        cout << endl;
    }
}