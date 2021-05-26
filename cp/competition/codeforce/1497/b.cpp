#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int ar[mxN], n, m, cnt[mxN];

void debug() {
	for (int i = 0; i < m; i++) {
		cout << cnt[i] << ' ';
	}
	cout << '\n';
}

void solve() {
	memset(cnt, 0, sizeof(cnt));

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	for (int i = 0; i < n; i++) {
		cnt[ar[i]%m]++;
	}

	//debug();
	int ans = 0, t = (m+2-1)/2;
	for (int i = 0; i < t; i++) {
		if (!i) {
			ans += (cnt[i] != 0);
		} else {
			if (cnt[i] == 0 && cnt[m-i] == 0) {
				continue;
			}
			int x = min(cnt[i], cnt[m-i]);
			int mx = max(cnt[i], cnt[m-i]);

			ans++;
			ans += max(0LL, mx-x-1);
		}
	}	
	if (m%2 == 0 && cnt[m/2] > 0) {
		ans++;
	}
	//debug();
	cout << ans << '\n';
	//cout << '\n';
}

signed main() {
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

