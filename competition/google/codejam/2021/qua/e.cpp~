#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string ar[100];
	for (int i = 0; i < 100; i++) {
		cin >> ar[i];
	}

	int cnt[100];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 10000; j++) {
			if (ar[i][j] == '1') {
				cnt[i]++;
			}
		}
	}

	int dd = 100000, ans = -1;
	for (int i = 0; i < 100; i++) {
		int ddd = abs(cnt[i]-5000);
		if (ddd < dd) {
			dd = ddd;
			ans = i+1;
		}
	}
	cout << ans << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("ein.txt", "r", stdin);
	//freopen("eout.txt", "w", stdout);

	int t = 1, i = 1, p;
	cin >> t >> p;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

