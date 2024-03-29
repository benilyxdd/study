//https://www.geeksforgeeks.org/find-number-endless-points/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int ar[mxN][mxN], n, dp[mxN][mxN], dp2[mxN][mxN];

void input() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];
}

void debug() {
	cout << "DP: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "\nDP2: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dp2[i][j] << ' ';
		}
		cout << '\n';
	}
}

void f() {
	for (int j = 0; j < n; j++) {
		bool ok = 1;
		for (int i = n-1; i >= 0; i--) {
			if (ar[i][j] == 0) {
				ok = 0;
			}
			dp[i][j] = ok;
		}
	}

	for (int i = 0; i < n; i++) {
		bool ok = 1;
		for (int j = n-1; j >= 0; j--) {
			if (ar[i][j] == 0) {
				ok = 0;
			}
			dp2[i][j] = ok;
		}
	}
}

int cnt() {
	int ans = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (dp[i][j] && dp2[i][j])
				ans++;
	return ans;
}

void solve() {
	input();
	f();
	//debug();
	cout << cnt();
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

