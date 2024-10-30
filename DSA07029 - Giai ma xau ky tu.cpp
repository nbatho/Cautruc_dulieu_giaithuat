#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s;
    cin >> s;
    stack <string> st;
    stack <int> lap;
    for (int i = 0 ;i < s.size();i++) {
        if (s[i] == '['){ 
            st.push(string(1,s[i]));
            // kiểm tra trường hợp ko có số
            if (lap.empty() || (i > 0 && !isdigit(s[i-1]))) {
                lap.push(1);
            }
        }
        else if (isdigit(s[i])) {
            int num = 0;
            while(i < s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++; // check phan tu tiep theo
            }
            i--; // giam 1 neu gap phan tu ko phai so
            lap.push(num);
        }
        else if (s[i] == ']') {
            string stor = "";
            while (!st.empty() && st.top() != "[") {
                stor = st.top() + stor;
                st.pop();
            }   
            st.pop(); // xoa dau '['
            string saulap = "";
            int solanlap = lap.top(); lap.pop();
            while (solanlap--) {
                saulap += stor;
            }
            st.push(saulap);
        }  
        else {
            st.push(string(1,s[i]));
        }
    }
    string ans = "";
    while(!st.empty()) {
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
}