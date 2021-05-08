#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	for (int i = n; i >= 1; i--) {
		bool first = false, ok = true;
		int t = i;
		for (int j = 2; j * j <= n; j++) {
			if (t % j == 0) {
				if (!first) {
					while (t % j == 0) {
						t /= j;
					}
					first = true;
				} else {
					ok = false;
					break;
				}
			}
		}
		if (ok && t == 1) {
			cout << i;
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

