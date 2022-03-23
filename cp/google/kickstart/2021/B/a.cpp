#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;
	int cnt = 1;
	cout << cnt << ' ';
	for (int i = 1; i < n; i++) {
		if (s[i] > s[i-1]) {
			cnt++;
			cout << cnt << ' ';
		} else {
			cnt = 1;
			cout << cnt << ' ';
		}
	}
	cout << '\n';
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

