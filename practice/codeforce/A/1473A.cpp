#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)101;
int n, d, ar[mxN];

void solve() {
	cin >> n >> d;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	bool ok = true;
	for (int i = 0; i < n; i++) {
		if (ar[i] > d) {
			ok = false;
			break;
		}
	}
	if (ok) {
		cout << "YES\n";
		return;
	}

	sort(ar, ar+n);
	if (ar[0]+ar[1] <= d) {
		cout << "YES\n";
	} else {
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


