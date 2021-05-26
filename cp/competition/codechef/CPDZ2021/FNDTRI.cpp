#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int fact(int n) {
	if (n == 0) {
		return 0;
	}
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}
	return res;
}

void solve() {
	int n, m;
	cin >> n >> m;
	cout << n * fact(m - 1) + m * fact(n - 1) << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

