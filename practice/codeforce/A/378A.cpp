#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	int d = 0, aw = 0, bw = 0;
	for (int i = 1; i <= 6; i++) {
		if (abs(a-i) < abs(b-i)) {
			aw++;
		} else if (abs(b-i) < abs(a-i)) {
			bw++;
		} else if (abs(b-i) == abs(a-i)) {
			d++;
		}
	}
	cout << aw << " " << d << " " << bw << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
