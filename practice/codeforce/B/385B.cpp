#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length(), ans = 0, ok = 0;
	for (int i = 0; i < len-4; i++) {
		string temp = s.substr(i, 4);
		if (temp == "bear") {
			ans += (len-(i+3))*(i-(-1));
			ok++;
		}
	}
	if (ok > 1) {
		ans -= ok;
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

