#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	string s;
	cin >> n >> q >> s;

	for (int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;
		bool ok = 0;
		for (int j = 0; j < a-1; j++) {
			if (s[j] == s[a-1]) {
				ok = 1;
				break;
			}
		}
		for (int j = b; j < n; j++) {
			if (s[j] == s[b-1]) {
				ok = 1;
				break;
			}
		}
		cout << (ok ? "YES" : "NO") << '\n';
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

