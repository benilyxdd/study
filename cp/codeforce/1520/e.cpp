#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	vector<int> sheep;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			sheep.push_back(i);
		}
	}

	int len = (int)sheep.size();
	for (int i = 0; i < len; i++) {
		sheep[i] -= i;
	}
	sort(sheep.begin(), sheep.end());
	int median = sheep[len / 2];
	ll ans = 0;
	for (int& x : sheep) {
		ans += (ll)abs(median - x);
	}
	cout << ans << '\n';
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

