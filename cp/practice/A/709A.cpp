#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int n = 0;
	int ans = 0;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		if (x <= b) {
			n += x;
			if (n > c) {
				ans++;
				n = 0;
			}
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


