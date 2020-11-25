#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	cin >> a;
	int ans = 0;
	if (a > 2) {
		if (a % 3 == 0) {
			ans = a/3*2;
		} else {
			ans = a/3*2+1;
		}
	} else {
		cout << 1 << "\n";
		return;
	}
	cout << ans << "\n";
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
