#include <bits/stdc++.h>
using namespace std;
int power(int c,int d) {
    if (d == 0) return 1;
    if (d == 1) return c;
    long long tmp = power(c,d/2);
    tmp = tmp*tmp;
    if (d%2==0) return tmp;
    else return tmp*c;
}
long long convert10(string a,int k) {
    reverse(a.begin(),a.end());
    long long res = 0;
    for (int i = 0 ;i < a.size();i++) {
        res += (a[i]-'0') * power(k,i);
    }
    return res;
}
string convertK(long long n, int k) {
    string res ="";
    while (n != 0) {
        res += to_string(n%k);
        n/=k;
    }
    reverse(res.begin(),res.end());
    return res;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        string a,b;
        cin >> k >> a >> b;
        long long res = convert10(a,k) + convert10(b,k);
        cout << convertK(res,k) << endl;
    }
}