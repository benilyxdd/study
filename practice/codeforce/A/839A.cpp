#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int have = 0;
	int day = 0;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		have += x;
		if (have > 7) {
			have -= 8;
			b -= 8;
		} else {
			b -= have;
			have = 0;
		}
		day++;
		if (b <= 0) {
			cout << day << "\n";
			return;
		}
	}
	cout << -1 << "\n";
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


