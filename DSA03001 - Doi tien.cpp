#include<bits/stdc++.h>
using namespace std;
int n,s;
int tien[] = {1000,500,200,100,50,20,10,5,2,1};
int sum;
int cnt = 0;
void Greedy() {
    int i = 0, sum =s;
    for (int i = 0;i<10;i++) {
        while (tien[i] <= sum) {
            sum -= tien[i];
            cnt++;
        }   
        if (sum == 0) break;
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> s;
        cnt =0;
        Greedy();
        cout << cnt << endl;
    }
}