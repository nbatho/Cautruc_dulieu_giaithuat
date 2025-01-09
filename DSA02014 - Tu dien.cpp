#include <bits/stdc++.h>
using namespace std;

pair<int, int> d[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
int k, m, n;
int used[4][4];
char a[4][4];
bool flag;
string s = "";
vector<string> ans;
set<string> dic;

void Init() {
    cin >> k >> m >> n;
    dic.clear();
    ans.clear();
    memset(used,0,sizeof(used));
    for (int i = 0; i < k; i++) {
        string s;
        cin >> s;
        dic.insert(s);
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    flag = false;
}

void Try(int i, int j) {
    s += a[i][j];
    if (dic.find(s) != dic.end()) {
        ans.push_back(s); 
        flag = true;
    }
    for (int k = 0; k < 8; k++) {
        int in = i + d[k].first;
        int jn = j + d[k].second;

        if (in >= 1 && in <= m && jn >= 1 && jn <= n && !used[in][jn]) {
            used[in][jn] = 1;
            Try(in, jn);
            used[in][jn] = 0;
        }
    }
    s.pop_back();
}

void solve() {
    Init();
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            Try(i, j);
        }
    }
    if (!flag)
        cout << -1;
    else {
        for (const auto &word : ans) {
            cout << word << " ";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }

    return 0;
}