#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length();

	int ans = (s[0] - '0');
	for (int i = 1; i < len; i += 2) {
		if (s[i] == 'A') {
			ans = ans & (s[i + 1] - '0');
		} else if (s[i] == 'B') {
			ans = ans | (s[i + 1] - '0');
		} else if (s[i] == 'C') {
			ans = ans ^ (s[i + 1] - '0');
		}
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

