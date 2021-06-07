#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

void solve() {
	int n, i;
	cin >> n;
	string s, s1;
	cin >> s >> s1;
	ll x;
	bool t = false;
	if (s[0] == s[1]) {
		x = 6;
		i = 2;
		t = true;
	} else {
		x = 3;
		i = 1;
		t = false;
	}
	for (; i < n; i++) {
		if (t) {
			if (s[i] == s[i+1]) {
				x = x * 3 % MOD;
				i++;
				t = true;
			} else {
				x = x % MOD;
				t = false;
			}
		} else {
			if (s[i] == s[i+1]) {
				i++;
				t = true;
			} else {
				t = false;
			}
			x = x * 2 % MOD;
		}
	}
	cout << x << "\n";
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

