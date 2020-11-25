#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, n;
	cin >> n;
	int ao = 0, ac = 0, bo = 0, bc = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 0) {
			ao++;
		} else {
			ac++;
		}
		if (b == 0) {
			bo++;
		} else {
			bc++;
		}
	}
	cout << min(n-ao, n-ac) + min(n-bo, n-bc) << "\n";
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


