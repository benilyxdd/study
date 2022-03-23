#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	vector<int> cnt(2, 0);
	for (int &x : ar) {
		cnt[0] += (x == 0);
		cnt[1] += (x == 1);
	}

	if (cnt[0] >= cnt[1]) {
		cout << cnt[0] << '\n';
		for (int i = 0; i < cnt[0]; i++) {
			cout << 0 << ' ';
		}
		cout << '\n';
	} else {
		int temp = (cnt[1] & 1 ? --cnt[1] : cnt[1]);
		cout << temp << '\n';
		for (int i = 0; i < temp; i++) {
			cout << 1 << ' ';
		}
		cout << '\n';
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
