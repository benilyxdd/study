#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int f = 0, ans = 0;
	for (int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if (c == '(') {
			f++;
		} else {
			if (f > 0) {
				f--;
			} else {
				ans++;
			}
		}
	}
	cout << ans << "\n";
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
