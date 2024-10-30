#include <bits/stdc++.h>
using namespace std;
// Tron 2 day con , day 1[l,m] day 2 [m,r]
void merge(int a[],int l,int m,int r) {
    vector <int> x(a + l,a+m+1);
    vector <int> y(a+m+1,a+r+1);
    int i =0,j=0;
    while (i < x.size() && j<y.size()) {
        if (x[i] < y[j]) {
            a[l] =x[i]; ++l; ++i; 
        }
        else {
            a[l] = y[j]; l++;j++;
        }
    }
    while (i<x.size()) {
        a[l] = x[i]; l++; i++;
    }
    while (i<y.size()) {
        a[l] = y[j]; l++; j++;
    }
}
void Merge_Sort(int a[], int l,int r) {
    if (l >=r) return;
    int m = (l + r) /2;
    Merge_Sort(a,l,m);
    Merge_Sort(a,m+1,r);
    merge(a,l,m,r);
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0 ;i < n;i++) cin >> a[i];
        // sort(a.begin(),a.end());

        Merge_Sort(a,0,n-1);
        for (int i = 0 ;i < n;i++) cout << a[i] << " " ;
        cout << endl;
    }
}