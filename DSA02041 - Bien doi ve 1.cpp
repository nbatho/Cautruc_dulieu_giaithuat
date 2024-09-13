#include<bits/stdc++.h>
using namespace std;
int minVal;
void Try(int n,int cnt ) {
    if (n == 1) {
        minVal = min(minVal,cnt);
        return;
    }
    if (n%2==0 && cnt +1 < minVal) Try(n/2,cnt+1);
    if (n%3==0 && cnt +1 < minVal) Try(n/3,cnt+1);
    if(cnt +1 < minVal)Try(n-1,cnt+1);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt =0;
        minVal = n;
        Try(n,0);
        cout << minVal << endl;
    }
}