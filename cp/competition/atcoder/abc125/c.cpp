#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> pre(n), suf(n);
	pre[0] = ar[0];
	suf[n - 1] = ar[n - 1];
	for (int i = 1; i < n; i++) {
		pre[i] = __gcd(pre[i - 1], ar[i]);
	}
	for (int i = n - 2; i >= 0; i--) {
		suf[i] = __gcd(suf[i + 1], ar[i]);
	}

	int ans = max(suf[1], pre[n - 2]);
	for (int i = 1; i < n - 1; i++) {
		ans = max(ans, __gcd(pre[i - 1], suf[i + 1]));
	}
	cout << ans << '\n';
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

