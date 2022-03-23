#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int long long

void solve() {
	int a, w, n;
	cin >> w >> n;
	vector<int> v;
	for (int i = 0; i < w; i++) {
		cin >> a;
		v.push_back(a);
	}	
	
	int d[w][n+1];
	for (int i = 0; i < w; i++) {
		for (int j = 1; j <= n; j++) {
			d[i][j] = min(abs(v[i]-j), n-j+v[i]);
		}
	}
	/*
	for (int i = 0 ; i < w; i++) {
		for (int j = 0; j < n; j++) {
			cout << d[i][j] << " ";
		}
		cout << "\n";
	}
	*/
	int ans = 1e8;
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		for (int j = 0; j < w; j++) {
			temp += d[j][i];
		}
		ans = min(ans, temp);
	}
	cout << ans << "\n";
}

signed main() {
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
