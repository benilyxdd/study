#include <bits/stdc++.h>

using namespace std;
#define ll long long

bool* sieve(int n) {
	bool xd[n];
	memset(xd, true, sizeof(xd));
	xd[0] = false;
	xd[1] = false;
	for (int i = 2; i*i <= n; i++) {
		if (xd[i]) {
			for (int p = i*i; p <= n; p+=i) {
				xd[p] = false;
			}
		}
	}
	return xd;
}

void solve() {
	int n;
	cin >> n;
	int xdd[n];
	for (int i = 0; i < n; i++) {
		cin >> xdd[i];
	}
	int yo = *max_element(xdd, xdd+n);
	bool *prime = sieve(yo);

	int mx = 0, temp = 0;
	for (int i = 0; i < n; i++) {
		if (*(prime+xdd[i])) {
			temp++;
			mx = max(temp, mx);
			if (mx == 3) {
				cout << 0 << "\n";
				return;
			}
		} else {
			temp = 0;
		}
	}
	cout << 3-mx << "\n";
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


