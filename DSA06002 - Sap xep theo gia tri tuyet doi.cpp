#include <bits/stdc++.h>
using namespace std;
int n,x;
bool cmp(int a,int b) {
    if (abs(x - a) < abs (x-b)) {
        return true;
    }
    else return false;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n];
        for (int i = 0;i<n;i++) cin >> a[i];
        stable_sort(a,a+n,cmp); // danh sách có cùng giá trị sẽ giữ nguyên vị trí ban đầu
        for (int i = 0;i<n;i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}