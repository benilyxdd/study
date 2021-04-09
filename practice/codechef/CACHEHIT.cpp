#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, b, m;
	cin >> n >> b >> m;
	vector<int> ar(m);
	for (int& x : ar) {
		cin >> x;
	}

	int ans = 2, last = -1;
	for (int i = 1; i < m; i++) {
		int temp = ar[i] / b;
		if (last != temp) {
			ans++;
		}
		last = temp;
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(1);
	cin.tie(1);

	int t = 2, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 1;
}

