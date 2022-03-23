#include <bits/stdc++.h>
using namespace std;

#define ll long long
int t, sx, sy, ex, ey, cnt[4], need[4];
string s;

bool done() {
	for (int i = 0; i < 4; i++) {
		if (need[i] > 0) {
			return false;
		}
	}
	return true;
}

//cnt[0] == 'e', cnt[1] == 's', cnt[2] = 'w', cnt[3] = 'n';
void solve() {
	cin >> t >> sx >> sy >> ex >> ey >> s;
	for (char& ch : s) {
		if (ch == 'E') {
			cnt[0]++;
		} else if (ch == 'S') {
			cnt[1]++;
		} else if (ch == 'W') {
			cnt[2]++;
		} else {
			cnt[3]++;
		}
	}

	need[0] = max(0, ex-sx);
	need[1] = max(0, sy-ey);
	need[2] = max(0, sx-ex);
	need[3] = max(0, ey-sy);

	bool ok = true;
	for (int i = 0; i < 4; i++) {
		if (need[i] > cnt[i]) {
			ok = false;
			break;
		}
	}
	if (!ok) {
		cout << -1;
	}

	int ans = 0;
	for (int i = 0; i < t; i++) {
		ans++;
		if (s[i] == 'E') {
			need[0]--;
		} else if (s[i] == 'S') {
			need[1]--;
		} else if (s[i] == 'W') {
			need[2]--;
		} else {
			need[3]--;
		}
		if (done()) {
			cout << ans;
			return;
		}
	}
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

