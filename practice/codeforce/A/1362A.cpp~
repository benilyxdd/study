#include <bits/stdc++.h>

using namespace std;

#define ll long long
void solve() {
	ll a, b;
	cin >> a >> b;
	string x = bitset<64>(a).to_string();
	string y = bitset<64>(b).to_string();
	int x1 = x.find_first_not_of('0');
	int y1 = y.find_first_not_of('0');
	if (a == b) {
		cout << 0 << "\n";
		return;
	}
	int cnt = 0;
	if (a > b) {
		for (int i = x1-1; i < 64; i++) {
			a >>= 1;
			cnt++;
			if (a == b) {
				cout << cnt << "\n";
				return;
			}
		}
	} else {
		for (int i = y1-1; i < 64; i++) {
			b >>= 1;
			cnt++;
			if (b == a) {
				cout << cnt << "\n";
				return;
			}
		}
	}
	cout << -1 << "\n";
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


