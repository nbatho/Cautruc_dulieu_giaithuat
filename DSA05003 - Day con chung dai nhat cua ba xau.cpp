#include <bits/stdc++.h>
using namespace std;
int dp[105][105][105];
int qhd(string a, string b,string c) {
	memset(dp,0,sizeof(dp));
	int n = a.size(), m = b.size() , z = c.size();
	for (int i = 1 ; i <= n ;i++) {
		for (int j = 1 ;j <= m;j++) {
			for (int k = 1;k<=z;k++) {
				if (a[i-1] == b[j-1] && b[j-1] == c[k-1])
					dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
				else dp[i][j][k] = max(dp[i][j][k-1], max(dp[i-1][j][k], dp[i][j-1][k]));
			}
		}
	}
	return dp[n][m][z];
}

void solve() {
	string x , y , z;
	int lenx, leny,lenz;
	cin >> lenx >> leny >> lenz;
	cin >> x >> y >> z;
	cout << qhd(x,y,z);
}
int main() {
	int t; cin >> t;
	while (t--) {
		solve();
		cout << endl;
	}
	return 0;
}