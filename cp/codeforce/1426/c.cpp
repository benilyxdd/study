#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	int ans = 1e9 + 7;
	for (int i = 1; i * i <= n; i++) {
		ans = min(ans, i - 1 + (n + i - 1) / i);
	}
	cout << --ans << '\n';
}

int main() {
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

