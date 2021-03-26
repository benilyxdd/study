#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, n;
	string s;
	cin >> a >> b >> s;
	n = s.length();

	int ans = 0;
	
	for (int i = 0; i < n; i++) {
		if (!i) {
			if (s[i] == '?') {
				while(s[i] == '?') {
					i++;
				}
			}
		} else {
			if (s[i] == '?') {
				int temp = i;
				while(s[i+1] == '?' && i < n) {
					i++;
				}
				if (i != n-1) {
					if (s[temp] == 'J') {
						ans += a;
					} else if (s[temp] == 'C') {
						ans += b;
					}
				}
				for (int j = temp; j <= i; j++) {
					s[j] = s[temp-1];
				}

			} else {
				if (s[i] != s[i-1] && s[i-1] != '?') {
					if (s[i] == 'J') {
						ans += a;
					} else if (s[i] == 'C') {
						ans += b;
					}
				}
			}
		}
	}
	cout << ans << '\n';
}

int main() {
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

