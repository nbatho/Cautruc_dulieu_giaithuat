#include <bits/stdc++.h>
using namespace std;
int n;
int c[105][105];    // mảng đề cho 
int  x[105];   
int sum = 0;    
int best = INT_MAX; // cost đến đích
int xbest[105]; // lưu đường đi thỏa mãn
bool used[105];
void Try(int k) {
    if (sum >= best) return;
    for (int i = 2 ;i <=n;i++) {
        if (!used[i]) {
            x[k] = i;
            used[i] = 1;
            sum += c[x[k-1]][i];
            if (k == n) {
                int totalsum = sum + c[x[n]][1];
                best = min(best,totalsum);
                for (int j = 0 ;j<n;j++) {
                    xbest[j] = x[j];
                }
            }
            else Try(k+1);
            sum = sum - c[x[k-1]][i];
            used[i] = 0;
        }
    }
}
void Init() {
    cin >> n;
    for (int i = 1;i<=n;i++) {
        for (int j = 1;j<=n;j++) {
            cin >> c[i][j];
        }
    }
    memset(used,0,sizeof(used));
}
int main() {
    Init();
    x[1] = 1;
    used[1] = 1;
    Try(2);
    cout << best << endl;
}