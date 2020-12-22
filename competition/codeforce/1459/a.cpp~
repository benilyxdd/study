#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string a, b;
	cin >> n >> a >> b;
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > b[i]) {
			cnt1++;
		} else if (b[i] > a[i]) {
			cnt2++;
		}
	}
	if (cnt1 == cnt2) {
		cout << "EQUAL\n";
	} else if (cnt1 > cnt2) {
		cout << "RED\n";
	} else {
		cout << "BLUE\n";
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

