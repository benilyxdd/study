#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool check(vector<ll> a) {
	if ((a[1] - a[0]) == (a[2] - a[1])) {
		return true;
	}
	return false;
}

void solve() {
	vector<ll> ar(8);
	for (ll &x : ar) {
		cin >> x;
	}

	int mx = 0;
	for (int i = 0; i < 4; i++) {
		int x = i, y = 7 - i;
		ll mid = (ll)(ar[x] + ar[y]) / 2;
		int cnt = 0;
		for (int j = 0; j < 4; j++) {
			int x2 = j, y2 = 7 - j;
			cnt += check({ar[x2], mid, ar[y2]});
		}
		cnt += check({ar[0], ar[3], ar[5]});
		cnt += check({ar[2], ar[4], ar[7]});
		cnt += check({ar[0], ar[1], ar[2]});
		cnt += check({ar[5], ar[6], ar[7]});
		mx = max(cnt, mx);
	}
	cout << mx << '\n';
}

int main() {
	// freopen("input1.txt", "r", stdin);
	// freopen("output1.txt", "w", stdout);
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

