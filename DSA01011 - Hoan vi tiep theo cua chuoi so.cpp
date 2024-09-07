#include <bits/stdc++.h>
using namespace std;
int n;
string s;
void sinh() {
    int i = (s.size() - 1) -1;
    while (i >= 0 && s[i] >= s[i+1]) {
        --i;
    }
    if (i < 0) {
        cout << n << " " <<"BIGGEST";
    }
    else {
        int j = s.size() - 1;
        while(s[i] >= s[j]) j--;
        swap(s[i],s[j]);
        reverse(s.begin() +i+1,s.end());
        cout << n << " " << s;
    }
    
}
int main() {
    int t; cin >> t;
    while (t--) {
        cin >> n >> s;
        sinh();
        cout << endl;
    }
}