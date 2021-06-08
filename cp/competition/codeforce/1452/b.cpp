#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	int mx = 0, sum = 0;
	for (int &x : ar) {
		mx = max(mx, x);
		sum += x;
	}
	n--;
	int k = max(mx, (sum + n - 1) / n);
	cout << n * k - sum << '\n';
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

