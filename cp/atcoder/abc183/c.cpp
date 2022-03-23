#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k; cin >> n >> k;
	int a[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}
	
	vector<int> x;
	for (int i = 1; i <= n; i++) {
		x.push_back(i);
	}

	int ans = 0;
	do{
		int sum = 0;
		for (int i = 1; i < n; i++) {
			sum += a[x[i-1]-1][x[i]-1];
		}
		sum += a[x[n-1]-1][0];
		if (sum == k) ans++;
	} while(next_permutation(x.begin(), x.end()) && x[0] == 1);
	cout << ans << "\n";
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

