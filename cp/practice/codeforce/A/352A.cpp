#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a;
	int z = 0, f = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 0) {
			z++;
		} else if (a == 5) {
			f++;
		}
	}
	string ans;
	if (z == 0) {
		cout << -1 << "\n";
	} else if (z > 0 && f < 9) {
		cout << 0 << "\n";
	} else {
		for (int i = 0; i < f/9; i++) {
			for (int j = 0; j < 9; j++) {
				ans += '5';
			}
		}
		for (int i = 0; i < z; i++) {
			ans += '0';
		}
	}
	cout << ans << "\n";
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


