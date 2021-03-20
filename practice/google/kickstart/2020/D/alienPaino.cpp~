#include <bits/stdc++.h>
using namespace std;

#define ll long long 
const int mxN = (int)1e4+4;
int dp[mxN][4];

void debug(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++){
			cout << dp[i][j] << ' ';
		}
		cout << '\n';
	}
}

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++)
		cin >> ar[i];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			dp[i][j] = (int)1e9;
		}
	}
	for (int i = 0; i < 4; i++) {
		dp[0][i] = 0;
	}


	for (int i = 1; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < 4; k++) {
				if ((ar[i] > ar[i-1] && j > k) || (ar[i] < ar[i-1] && j < k) || (ar[i] == ar[i-1] && j == k)) {
					dp[i][j] = min(dp[i][j], dp[i-1][k]);
				} else {
					dp[i][j] = min(dp[i][j], dp[i-1][k]+1);
				}
			}
		}
	}

	//cout << '\n';
	//debug(n);
	
	cout << *min_element(dp[n-1], dp[n-1]+4) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
