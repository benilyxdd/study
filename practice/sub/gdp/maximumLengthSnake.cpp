#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e3;
int ar[mxN][mxN], dp[mxN][mxN], n, m, mx;

void hi() {
	cout << "HI";
}

bool pr(vector<int>& vec, int a, int b, int now) {
	//cout << "a: " << a << " b: " << b << " now: " << now << ' ' << dp[a][b] << ' ' << mx << '\n';
	if (a >= n || b >= m) {
		return 0;
	}
	if (dp[a][b] != now) {
		return 0;
	}
	if (now == mx) {
		return 1;
	}
	
	if (pr(vec, a+1, b, now+1)) {
		vec.push_back(ar[a][b]);
		return 1;
	}
	if (pr(vec, a, b+1, now+1)) {
		vec.push_back(ar[a][b]);
		return 1;
	}
	return 0;
}	

void debug() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> ar[i][j];

	dp[0][0] = 0;
	for (int i = 1; i < n; i++) {
		int temp = abs(ar[i][0]-ar[i-1][0]);
		if (temp == 1) {
			dp[i][0] = dp[i-1][0]+1;
		} else {
			dp[i][0] = 0;
		}
	}

	for (int i = 1; i < m; i++) {
		int temp = abs(ar[0][i]-ar[0][i-1]);
		if (temp == 1) {
			dp[0][i] = dp[i-1][0]+1;
		} else{
			dp[0][i] = 0;
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			int x = 0, y = 0;
			if (abs(ar[i-1][j]-ar[i][j]) == 1) {
				x = dp[i-1][j]+1;
			}
			if (abs(ar[i][j-1]-ar[i][j]) == 1) {
				y = dp[i][j-1]+1;
			}

			dp[i][j] = max(x, y);
		}
	}
	
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dp[i][j] > mx) {
				mx = dp[i][j];
				x = i, y = j;
			}	
		}
	}

	debug();
	//cout << x << ' ' << y << ' ' << mx << '\n';

	vector<int> ans;
	ans.push_back(ar[x][y]);
	pr(ans, 0, 0, 0);

	reverse(ans.begin(), ans.end());
	for (int& in : ans) {
		cout << in << ' ';
	}
	cout << '\n';
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

