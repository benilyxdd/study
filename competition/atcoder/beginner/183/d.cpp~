#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll 

void solve() {
	int n, w; cin >> n >> w;
	map<int, int> m;
	
	for (int i = 0; i < n; i++) {
		int a, b, c; cin >> a >> b >> c;
		for (int j = a; j < b; j++) {
			m[j] += c;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (m[i] > w) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
}
signed main() {
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

