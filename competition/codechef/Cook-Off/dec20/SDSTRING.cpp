#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	if (len&1) {
		cout << -1 << "\n";
		return;
	}
	int cnt1 = 0, cnt0 = 0;
	for (int i = 0; i < len; i++) {
		if (s[i] == '1') {
			cnt1++;
		} else {
			cnt0++;
		}
	}
	if (cnt1 == 0 || cnt0 == 0) {
		cout << -1 << "\n";
		return;
	}
	int diff = abs(cnt1-cnt0);
	cout << diff/2 << "\n";
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

