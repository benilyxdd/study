#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int l, r, a;
	cin >> l >> r >> a;
	while(a > 0 && l != r) {
		if (l > r) {
			r++;
			a--;
		} else {
			l++;
			a--;
		}
	}
	cout << min(l, r)*2 + a - a%2 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
