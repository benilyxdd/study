#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	ll cnt[n];
	memset(cnt, 0x00, n*4);
	for (int i = 0; i < n; i++) {
		cin >> cnt[i];
	}
	ll c = 0;
	ll last = n;
	ll save = 0;
	while(true) {
		auto it = min_element(cnt, cnt+last);
		ll x = distance(cnt, it);
		c += (*it-save)*last;
		last = x;
		save = *it;
		if (it == cnt) {
			break;
		}
	}
	cout << c << "\n";
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

