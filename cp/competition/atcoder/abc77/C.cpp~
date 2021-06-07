#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> a, b, c;
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		a.push_back(d);
	}
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		b.push_back(d);
	}
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		c.push_back(d);
	}
	sort(a.begin(), a.end());
	sort(c.begin(), c.end());
	
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		ll dis = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
		ll dis2 = c.end() - upper_bound(c.begin(), c.end(), b[i]);
		ans += dis*dis2;
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

