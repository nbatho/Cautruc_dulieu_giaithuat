#include <bits/stdc++.h>
using namespace std;
int a[15];
string s;
vector <string> yy;
vector <string> res;
void Try(int i) {
    for (int j = 0 ;j <=1;j++) {
        a[i] = j;
        if (i == s.size()-1) {
            string tmp="02/02/";
            string tmp1="20/02/";
            string tmp2="22/02/";
            for (int l = 0 ;l<s.size();l++) {
                tmp +=s[a[l]];
                tmp1 +=s[a[l]];
                tmp2 +=s[a[l]];
            }
            yy.push_back(tmp);
            yy.push_back(tmp1);
            yy.push_back(tmp2);
        } else Try(i+1);
    }
}
int main() {
    s = "2022";
    Try(1);  
    sort(yy.begin(),yy.end());
    for (int i = 0 ;i<yy.size();i++) {
        cout << yy[i] << endl;
    }
}