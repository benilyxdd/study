#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n, save = 0;
	cin >> n;
	int mx = 0, temp = 0;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a >= save) {
			temp++;
		} else {
			temp = 1;
		}
		mx = max(mx, temp);
		save = a;
	}
	cout << mx << "\n";
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


