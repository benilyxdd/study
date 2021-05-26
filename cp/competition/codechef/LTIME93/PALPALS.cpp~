#include <bits/stdc++.h>
using namespace std;

#define ll long long
int cnt[26];

void solve() {
	memset(cnt, 0, sizeof(cnt));

	string a;
	cin >> a;

	for (char& ch : a) {
		cnt[ch-'a']++;
	}
	int ok = 0, cant = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > 1) {
			if (cnt[i]&1) {
				ok += cnt[i]/2;
				cant++;
			} else {
				ok += cnt[i]/2;
			}
		} else if (cnt[i] == 1) {
			cant++;
		}
	}
	if (ok >= cant) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

