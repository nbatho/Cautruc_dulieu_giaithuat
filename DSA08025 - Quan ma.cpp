#include <bits/stdc++.h>
using namespace std;
vector <pair <int,int>> d = {{-2,-1}, {-2,1}, {-1,-2} , {-1,2}, {1,-2} , {1,2} , {2,-1} ,{2,1}};
int vs[10][10];
int ans = INT_MAX;
void init() {
    for (int i = 0 ;i < 10;i++) {
        for (int j = 0 ;j < 10;j++) {
            vs[i][j] = -1;
        }
    }
}
void bfs(pair <int,int> start , pair <int,int> end) {
    if (start == end) {
        cout << 0 << endl;
        return;
    }
    queue <pair <int,int>> q;
    init();
    q.push(start);
    vs[start.first][start.second] = 0;
    while (!q.empty()) {
        pair <int,int> top = q.front(); q.pop();
        for (int k = 0 ;k < d.size();k++) {
            int in = top.first +  d[k].first;
            int jn = top.second +  d[k].second;
            if (vs[in][jn] == -1 && in >=1 && in <= 8 && jn >=1 && jn <=8) {
                q.push({in,jn});
                vs[in][jn] = vs[top.first][top.second] + 1;
            }
        }
        if ( vs[end.first][end.second] != -1) break;
    }
    cout << vs[end.first][end.second];
}
pair <int,int> convert(const string &s) {
    return {s[0] - 'a' + 1, s[1] - '0' };
}
void solve() {
    string s, t; 
    cin >> s >> t;
    pair <int,int> startPos = convert(s);
    pair <int,int> endPos = convert(t);
    bfs(startPos,endPos);

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}