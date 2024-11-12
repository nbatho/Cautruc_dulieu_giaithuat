#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> adj[n+1];
    string s;int v;
    cin.ignore();
    for (int u = 1;u<=n;u++) {
        getline(cin,s);
        stringstream ss(s);
        while (ss >> v) {
            if (u < v) adj[u].push_back(v);
        }
    }
    for (int u = 1;u<=n;u++) {
        for (auto v:adj[u]) {
            cout << u << " " << v << endl;
        }
    }

}