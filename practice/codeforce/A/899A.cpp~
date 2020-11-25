#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a = 0, b = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 2) {
			b++;
		} else {
			a++;
		}
	}
	int ans = 0;
	if (a <= b) {
		ans = min(a, b);
	} else {
		ans = b + (a-b)/3;
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
