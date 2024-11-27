#include <bits/stdc++.h>
using namespace std;

int input[10];
bool used[10] = {false};
vector<vector<int>> sinhDau;
vector<vector<int>> SinhHVSo;
vector<int> so(5);
vector<int> dau(4);

void Init() {
    for (int i = 0; i < 5; i++) {
        cin >> input[i];
    }
    memset(used, false, sizeof(used));
    sinhDau.clear();
    SinhHVSo.clear();
}

void TrySo(int i) {
    for (int j = 0; j < 5; j++) {
        if (!used[j]) {
            so[i] = input[j];
            used[j] = true;
            if (i == 4) {
                SinhHVSo.push_back(so);
            } else {
                TrySo(i + 1);
            }
            used[j] = false;
        }
    }
}

void TryDau(int i) {
    for (int j = 1; j <= 3; j++) {
        dau[i] = j;
        if (i == 3) {
            sinhDau.push_back(dau);
        } else {
            TryDau(i + 1);
        }
    }
}

int Tinh(int a, int b, int op) {
    if (op == 1) return a + b;
    if (op == 2) return a - b;
    if (op == 3) return a * b;
    return 0;
}

bool check(vector<int> so, vector<int> dau) {
    int result = Tinh(so[0], so[1], dau[0]);
    result = Tinh(result, so[2], dau[1]);
    result = Tinh(result, so[3], dau[2]);
    result = Tinh(result, so[4], dau[3]);
    return result == 23;
}

void solve() {
    Init();
    TrySo(0);
    TryDau(0);
    for (auto i : SinhHVSo) {
        for (auto j : sinhDau) {
            if (check(i, j)) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}
