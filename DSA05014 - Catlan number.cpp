#include <bits/stdc++.h>
using namespace std;
string cong(string a,string b) {
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    int n = max(a.size(),b.size());
    string ans = "";
    int nho = 0;
    for (int i = n - 1 ;i >= 0 ;i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + nho;
        ans += to_string(sum%10);
        nho = sum/10;
    }
    if (nho) ans += to_string(nho);
    reverse(ans.begin(),ans.end());
    return ans;
}
string nhan(string a,string b) {
    int len1 = a.size();
    int len2 = b.size();
    int len = len1 + len2;
    vector <int> strA,strB;
    vector <vector<int>> res(len2);
    for (int i = 0 ;i < len1;i++) strA.push_back(int(a[i] - '0'));
    for (int i = 0 ;i < len2;i++) strB.push_back(int(b[i] - '0'));
    int index = 0;
    for (int i = len2 - 1;i>=0;i--) {
        int t = 0;
        while (t < index) {
            res[index].push_back(0);
            t++;
        }
        int nho = 0 , so = 0;
        for (int j = len1 - 1;j >=0;j--) {
            so = strA[j] * strB[i] + nho;
            res[index].push_back(so%10);
            nho = so/10;
        }
        if (nho) res[index].push_back(nho);
        while(res[index].size() < len) {
            res[index].push_back(0);
        }
        reverse(res[index].begin(),res[index].end());
        index++;
    }
    string ans = "";
    int nho = 0;
    for (int j = res[0].size() - 1;j>=0;j--) {
        int so = nho;
        for (int i = 0 ;i < res.size();i++) {
            so += res[i][j];
        }
        ans = char(so%10 +'0') + ans;
        nho = so/10;
    }
    if (nho) ans = char(nho +'0') + ans;
    while(ans[0] == '0') ans.erase(ans.begin());
    return ans;
}
string Catalan[105];
void Init() {
    Catalan[0] = Catalan[1] = "1";
    for (int i = 2 ;i < 100;i++) {
        Catalan[i] = "0";
        for (int j = 0 ;j < i;j++) {
            string tich = nhan(Catalan[j],Catalan[i-j-1]);
            Catalan[i] = cong(Catalan[i],tich);
        }
    }
}
int main() {
    Init();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << Catalan[n] << endl;
    }
}