#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    stack <int> st;
    int n;
    string res ="";
    while (cin >> s) {
        if (s == "push") {
            cin >> n;
            st.push(n);
        }
        else if (s == "show") {
            vector <int> a;
            if (st.empty()) {
                cout << "empty";
                continue;
            }
            while (!st.empty()) {
                a.push_back(st.top());
                st.pop();
            }
            reverse(a.begin(),a.end());
            for (int i = 0 ;i < a.size();i++) {
                cout << a[i] << " ";
                st.push(a[i]);
            }
            cout << endl;
        }
        else if (s == "pop") {
            st.pop();
            
        }
    } 
   return 0;
}