#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	while(n > 0) {
		int x = sqrt(n);
		n -= x*x;
		cnt++;
	}
	cout << cnt << "\n";
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
