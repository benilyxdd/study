#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	int xd[200020];
	memset(xd, 0, sizeof(xd));
	for (int i = 1; i <= n; i++) {
		cin >> a;
		xd[a] = i;
	}
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		ans += abs(xd[i+1]-xd[i]);
	}
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

