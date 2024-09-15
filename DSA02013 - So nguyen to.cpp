#include <bits/stdc++.h>
using namespace std;
int n,p,s, sum =0,pos;
vector <int> Prime;
bool isprime[205] = {false},used[205];
vector <vector <int>> res;
void seive() {
    for (int i = 0;i<200;i++) 
        isprime[i] = 1;
    isprime[0] = isprime [1] = 0;
    for (int i = 2;i*i<=200;i++) {
        if (isprime[i]) {
            for (int j = i*i;j<=200;j+=i) {
                isprime[j] =0;
            }
        }
    }
    for (int i = 2 ;i<=200;i++) {
        if (isprime[i]) {
            Prime.push_back(i);
        }
    }
}
void Init() {
    cin >> n >> p >> s;
    memset(used,false,sizeof(used));
    sum =0;
    res.clear();
    for (int i = 0 ;i <Prime.size();i++) {
        if (Prime[i] > p) {
            pos = i;
            return;
        }
    }

}
void Try(int i , vector <int> &tmp) {
    if (sum > s) return;
    if (sum == s && tmp.size() == n) {
        res.push_back(tmp);
        return;
    }
    for (int j = i;j<Prime.size();j++) {
        if (!used[j] && sum + Prime[j] <= s && tmp.size() < n) {
            sum += Prime[j];
            tmp.push_back(Prime[j]);
            used[j] = true;
            Try(j+1,tmp);
            tmp.pop_back();
            sum -= Prime[j];
            used[j] = false;
        }
    }
}
int main() {
    seive();
    int t;
    cin >> t;
    while (t--) {
        Init();
        vector <int> tmp;
        tmp.clear();
        Try(pos,tmp);
        cout << res.size() << endl;
        for (int i = 0 ;i <res.size();i++) {
            for (int j = 0 ;j<res[i].size();j++) 
                cout << res[i][j] << " ";
        cout << endl;
        } 
    }
}