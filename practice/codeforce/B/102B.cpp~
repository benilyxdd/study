#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int ans = 0;
	if (s.length() == 1) {
		cout << ans;
		return;
	}

	while(true) {
		int cnt = 0;
		//add all no
		for (char& ch : s) {
			cnt += ch-'0';
		}
		ans++;

		s = to_string(cnt);

		if (s.length() == 1) {
			cout << ans;
			return;
		}
	}
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

