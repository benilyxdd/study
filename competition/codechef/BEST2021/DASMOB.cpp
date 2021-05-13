#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	bool dig = false, cap = false, spe = false;
	for (char &ch : s) {
		if (!dig && isdigit(ch)) {
			dig = true;
		}
		if (!cap && (isupper(ch))) {
			cap = true;
		}
		if (!spe && (isspace(ch) || ch == '/' || ch == '\\')) {
			spe = true;
		}
	}

	bool ok = (s.length() >= 4 && dig && cap && !spe && !isdigit(s[0]));
	cout << (ok ? 1 : 0) << '\n';
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

