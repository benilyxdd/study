#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int cnt = 120-n;
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			cnt++;
		}
	}
	if (cnt >= 90) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
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

