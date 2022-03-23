#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int a[26];

void solve() {
	string s; cin >> s;
	int x = s.length();
	for (int i = 0; i < x; i++) {
		a[s[i]-'A']++;
	}
	char left;
	bool ok;
	if (x&1) {
		ok = true;
	} else {
		ok = false;
	}
	string ans = "";
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < a[i]/2; j++) {
			ans += (char)(i+'A');
		}
		if (a[i]&1 && ok) {
			ok = false;
			left = (char)(i+'A');
		} else if (a[i]&1 && ok == false) {
			cout << "NO SOLUTION" << "\n";
			return;
		}
	}
	string cp = ans;
	reverse(cp.begin(), cp.end());
	if (x&1) {
		ans += left;
	}
	ans += cp;
	cout << ans << "\n";
}

signed main() {
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

