#include <bits/stdc++.h>
using namespace std;
int n,k;
int pos[1005];
string a[1005];
string b[1005];
bool used[1005] = {false};
int minVal = INT_MAX;
void in() {
    for (int i = 0 ;i < n;i++) {
        for (int j = 0 ;j < k;j++) {
            b[i][j] =  a[i][pos[j]];
        }
    }
    sort(b,b+n);
    int MIN = stoi(b[0]);
    int MAX = stoi(b[n-1]);
    minVal = min(minVal,MAX-MIN);
}
void Try(int i ) {
    for (int j = 0;j<k;j++) {
        if (!used[j]) {
            pos[i] = j;
            used[j] = true;
            if (i == k-1) {
                in();
            }
            else Try(i+1);
            used[j] = false;
        }
    }
}
void Init() {
    cin >> n >> k;
    for (int i = 0;i<n;i++) {
        cin >> a[i];
        b[i] = a[i];
    }
}
int main() {
    Init();
    Try(0);
    cout << minVal << endl;
}