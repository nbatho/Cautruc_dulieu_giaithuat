#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int b[1005];
bool stop = false;
void sinh() {
    int i = n;
    while (i >0  && a[i] > a[i+1]) {
        --i;
    }
    if (i== 0) stop = true;
    else {
        int k = n;
        while (a[k] < a[i]) k--;
        swap(a[k],a[i]);
        reverse(a+i+1,a+n+1);
    }
}
int main() {
    cin >> n;
    stop = false;
    for (int i = 1 ;i <= n;i++) {
        cin >> b[i];
    }
    sort(b+1,b+n+1);
    for (int i = 1 ;i <= n;i++) {
        a[i] = i;
        
    }
    while (!stop) {
        for (int i = 1;i <=n;i++) {
            cout << b[a[i]] << " ";
        }
        sinh();
        cout << endl;
    }

}