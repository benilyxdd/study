#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, t, k, d;

void solve() {
	cin >> n >> t >> k >> d;
	int x = (n+k-1)/k*t;
	int d0 = 0, d1 = d;
	bool ok = false;
	int y = 0, ne = (n+k-1)/k;
	//cout << "NE: " << ne << "\n";
	for (int i = 0; i < 900000; i++) {
		if (ne <= 0) {
			break;
		}

		if (d1 == 0 && !ok) {
			ok = 1;
		}	

		if (d0 == 0) {
			ne--;
			d0 = t;
		}

		if (d1 == 0 && ok) {
			ne--;
			d1 = t;
		}

		d0--, d1--, y++;
	}
	//cout << d0 << " " << d1 << "\n";
	y += max(d0, d1);
	//cout << "Y: " << y << "\n";
	//cout << "X: " << x << "\n";
	if (y >= x) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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


