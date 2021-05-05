#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	vector<bool> seen(128, false);
	for (int i = 0; i < n; i++) {
		char now = s[i];
		if (seen[s[i]]) {
			cout << "NO\n";
			return;
		}
		seen[s[i]] = true;
		while (s[i + 1] == now) {
			i++;
		}
	}
	cout << "YES\n";
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

