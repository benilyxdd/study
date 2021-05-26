#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int MOD = (int)1e9;

void solve() {
	string s;
	cin >> s;
	int len = s.length(), ax = 0, ay = 0;

	vector<int> t;
	t.push_back(1);

	for (int i = 0; i < len; i++) {
		if (s[i] == '(') {
			t.push_back((s[i-1]-'0')*t.back()%MOD);
		} else if (s[i] == ')') {
			t.pop_back();
		} else if (isalpha(s[i])) {
			if (s[i] == 'E') {
				ax = (ax+t.back())%MOD;
			} else if (s[i] == 'W') {
				ax = ((ax-t.back())%MOD+MOD)%MOD;
			} else if (s[i] == 'S') {
				ay = (ay+t.back())%MOD;
			} else if (s[i] == 'N') {
				ay = ((ay-t.back())%MOD+MOD)%MOD;
			}
		}
	}
	cout << ax+1 << ' ' << ay+1 << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

