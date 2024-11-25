#include <bits/stdc++.h>
using namespace std;
void pushst(priority_queue <pair <int,int>> &q, string s) {
    int len = s.size();
    for (int i = 0 ;i < len;i++) {
        if (isdigit(s[i]) && s[i] != '0') {
            int heso = 0, somu = 0;
            while (isdigit(s[i]) && i < len) {
                heso = heso * 10 + (s[i] - '0');
                i++;
            }
            i+=3;
            while (isdigit(s[i]) && i < len) {
                somu = somu * 10 + (s[i] - '0');
                i++;
            }
            q.push({somu,heso});
        }
    }
}
void solve() {
    string dt1, dt2;
    getline(cin,dt1);
    getline(cin,dt2);
    priority_queue <pair <int,int>> q1;
    priority_queue <pair <int,int>> q2;
    pushst(q1,dt1);
    pushst(q2,dt2);
    priority_queue <pair <int,int>> ans;
    while (!q1.empty() && !q2.empty()) {
        pair <int,int> top1 = q1.top();
        pair <int,int> top2 = q2.top();
        if (top1.first == top2.first) {
            int tmp = top1.second + top2.second;
            ans.push({top1.first,tmp});
            q1.pop(); q2.pop();
        }
        else if (top1.first > top2.first) {
            ans.push({top1.first,top1.second});
            q1.pop();
        }
        else {
            ans.push({top2.first,top2.second});
            q2.pop();
        }
    }
    string res = "";
    while (ans.size() > 1) {
        pair <int,int> top = ans.top();
        res = res + to_string(top.second) + "*x^" + to_string(top.first) + " + ";
        ans.pop();
    }
    pair <int,int> top = ans.top();
    res = res+ to_string(top.second) + "*x^" + to_string(top.first);
    ans.pop();
    cout << res;
}
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve();
        cout << endl;
    }
}