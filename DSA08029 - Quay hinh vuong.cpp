#include <bits/stdc++.h>
using namespace std;
struct HCN {
    int matrix[2][3];
    int ans = 0;
    void Init() {
        for (int i = 0 ;i < 2;i++) {
            for (int j = 0 ;j < 3;j++) {
                cin >> matrix[i][j];
            } } }
    void XoayPhai() {
        int a = matrix[0][1],b = matrix[0][2],c = matrix[1][1],d = matrix[1][2];
        matrix[0][1] = c;
        matrix[0][2] = a;
        matrix[1][1] = d;
        matrix[1][2] = b;
    }
    void XoayTrai() {
        int a = matrix[0][0],b = matrix[0][1],c = matrix[1][0],d = matrix[1][1];
        matrix[0][0] = c;
        matrix[0][1] = a;
        matrix[1][0] = d;
        matrix[1][1] = b;
    }
};
bool check(HCN C,HCN D) {
    for (int i = 0 ;i < 2;i++) {
        for (int j = 0 ;j < 3;j++) {
            if (C.matrix[i][j] != D.matrix[i][j]) return false;
        }
    }
    return true;
}
void Solve() {
    HCN Dau,Dich;
    Dau.Init();
    Dich.Init();
    queue <HCN> q;
    q.push(Dau);
    while (!q.empty()) {
        HCN top = q.front();q.pop();
        if (check(top,Dich)) {
            cout << top.ans << endl;
            return;
        }
        HCN x = top, y = top;
        x.XoayPhai(); x.ans = top.ans +1;
        y.XoayTrai(); y.ans = top.ans +1;
        q.push(x);
        q.push(y);
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solve();
        cout << endl;
    }
}