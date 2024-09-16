#include <bits/stdc++.h>
using namespace std;
char c;
char a[20],used[20];
vector <string> res;
bool check() {
    bool found = false;
    if (c < 'E') {
        if (a[1] == 1 || a[c - 'A' + 1] == 1) {
            found =true;
        }
    }
    else {
        if (a[1] == 1 && a[c - 'A' + 1] == 5) {
            found = true;
        }
        if (a[1] == 5 && a[c - 'A' + 1] == 1) {
            found = true;
        }
    }

    for (int i = 1;i<= c - 'A' ;i++) {
        if (a[i] == 1 && a[i+1] == 5) {
            found = true;
        }
    }
    for (int i = 1;i<= c - 'A' ;i++) {
        if (a[i] == 5 && a[i+1] == 1) {
            found = true;
        }
    }
    return found ;
}
void Try(int i) {
    for (int j = 1;j<=c- 'A' + 1;j++) {
        if(!used[j]) {        
            a[i] = j;
            used[j] = true;
            if (i == c - 'A' + 1) {      
                if (check()) {
                    string tmp;
                    for (int k = 1;k<=c - 'A' + 1;k++) {
                            tmp += char(a[k] + 64);
                        }
                    if (!tmp.empty()) {
                        res.push_back(tmp);
                    }
                }
            } 
            else Try(i+1);
            used[j] = false;
        }
    }
}
int main() {
    cin >> c;
    memset(used,false,sizeof(used));
    Try(1);
    sort(res.begin(),res.end());
    for (int i = 0;i<res.size();i++) {
        cout << res[i] << endl;
    }
}