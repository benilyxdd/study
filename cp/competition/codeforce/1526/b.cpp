#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	
	if (n > 1099) { // chickent McNugget Theorem (11, 111);
		cout << "YES\n";
	} else {
		for (int i = 0; i < 11; i++) {
			int x = 111 * i;
			if ((n - x) % 11 == 0 && x <= n) {
				cout << "YES\n";
				return;
			}
		}
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

