#include <bits/stdc++.h>
using namespace std;
void tower(int n,char a, char b,char c) {
    if (n == 1) cout << a << " -> " << c << endl;
    else {
        tower(n-1,a,c,b);
        cout << a << " -> " << c << endl;
        tower(n-1,b,a,c);
    }
}
int main() {
    int n;
    cin >> n;
    tower(n,'A','B','C');
}