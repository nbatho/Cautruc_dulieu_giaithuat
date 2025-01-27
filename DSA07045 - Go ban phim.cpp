#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    deque<char> res;
    stack<char> right_stack;

    for (char c : s) {
        if (isalnum(c)) {
            res.push_back(c); 
        } else if (c == '<') {
            if (!res.empty()) {
                right_stack.push(res.back());
                res.pop_back();
            }
        } else if (c == '>') {
            if (!right_stack.empty()) {
                res.push_back(right_stack.top());
                right_stack.pop();
            }
        } else if (c == '-') {
            if (!res.empty()) {
                res.pop_back(); 
            }
        }
    }
    while (!right_stack.empty()) {
        res.push_back(right_stack.top());
        right_stack.pop();
    }

    for (char c : res) cout << c;
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
