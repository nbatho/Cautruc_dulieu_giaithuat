#include <bits/stdc++.h>
using namespace std;
/*
    np[i-1] = 0
    gray[i] != np[i-1] thi np += 1
    else np +=0
    giai thich test 1
    gray 01101 
    bin  0  giu nguyen
         1  (0 != 1 ) bin +=1
         0  (1 == 1)  bin +=0
         0  (0 == 0)  bin +=0
         1  (0 != 1)  bin +=1
*/
int main() {
    int t;
    cin >>t;
    while (t--) {
        string s,np ="";
        cin >> s;
        
        np = s[0];
        for (int i = 1;i< s.size();i++) {
            int n = np.size() - 1;
            if (np[n] != s[i]) np += "1";
            else np +="0";
        }
        cout << np << endl;
    }
}