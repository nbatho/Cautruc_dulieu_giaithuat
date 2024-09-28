#include <bits/stdc++.h>
using namespace std;
int n;
string a[15];
vector <string> s(n+1);
int minVal = INT_MAX;
bool used[15] = {false};
int Count;
int DemKyTuLap(int i) {
    if (i == 1) return 0;
    int cnt = 0,m=0,n=0;
    string str1 = a[i-1];
    string str2 = a[i];
    while (m < str1.size() && n < str2.size()) {
        if (str1[m] == str2[n]) {
            cnt++;
            m++;
            n++;
        }
        else if (str1[m] < str2[n]) m++;
        else n++;
    }
    return cnt;
}
void Try(int i ,int Count) {
    for (int j = 1;j<=n;j++) {
        if (!used[j]) {
            a[i] = s[j];
            used[j] = true;
            int tmp = DemKyTuLap(i);
            if (i == n) {
                minVal = min(minVal,Count + tmp);
            }
            else Try(i+1,Count + tmp);
            used[j] = false;
        } 
    }
}
int main() {
    cin >> n;
    minVal = INT_MAX;
    for (int i = 0 ;i < n;i++) {
        string x; cin >> x;
        s.push_back(x);
    }
    Try(1,0);
    cout << minVal << endl;
}