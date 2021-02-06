#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int ans = 1;
	for (int i = 0; i < 2; i++) {
		int x = 0;
		if (s[i] == '0') {
			x = 2;
		} else if (s[i] == '1') {
			x = 7;
		} else if (s[i] == '2') {
			x = 2;
		} else if (s[i] == '3') {
			x = 3;
		} else if (s[i] == '4') {
			x = 3;
		} else if (s[i] == '5') {
			x = 4;
		} else if (s[i] == '6') {
			x = 2;
		} else if (s[i] == '7') {
			x = 5;
		} else if (s[i] == '8') {
			x = 1;
		} else if (s[i] == '9') {
			x = 2;
		}
		ans *= x;
	}
	cout << ans;
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


