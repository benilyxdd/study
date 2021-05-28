#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> tc = {111111111, 11111111, 1111111, 111111, 11111, 1111, 111, 11};

void solve() {
	int n;
	cin >> n;
	bool ok = false;
	for (int &x : tc) {
		if (n % x == 0) {
			ok = true;
			break;
		}
	}
	while (n > 10) {
		for (int &x : tc) {
			if (x >= n) {
				n -= x;
			}
		}
	}
	cout << (ok || n == 0 ? "YES" : "NO") << '\n';
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

