#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int dp[mxN][mxN], m, n;
//0 = corner, 1 = up, 2 = left;
int way[mxN][mxN];

void debug() {
	for (int i = 0; i <= m; i++) {
		for (int j = 0; j <= n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	string a, b;
	cin >> a >> b;
	m = a.length(), n = b.length();

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i-1] == b[j-1]) {
				dp[i][j] = dp[i-1][j-1]+1;
				way[i][j] = 0;
			} else {
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
				if (dp[i][j] == dp[i-1][j]) {
					way[i][j] = 1;
				} else {
					way[i][j] = 2;
				}
			}
		}
	}
	//debug();

	cout << dp[m][n] << '\n';
	
	vector<char> ans;
	for (int i = m, j = n; i >= 0;) {
		if (way[i][j] == 0) {
			ans.push_back(a[i-1]);
			i--, j--;
		} else if (way[i][j] == 1) {
			i--;
		} else if (way[i][j] == 2) {
			j--;
		}
	}

	reverse(ans.begin(), ans.end());
	for (char& ch : ans) {
		cout << ch;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

