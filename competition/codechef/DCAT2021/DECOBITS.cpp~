#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll a, b;
	cin >> a >> b;
	string bit_a = bitset<64>(a).to_string();
	string bit_b = bitset<64>(b).to_string();
	
	int ans = 0, cnt1 = 0, cnt0 = 0;
	for (int i = 0; i < 64; i++) {
		cnt1 += (bit_a[i] == '1');
		cnt0 += (bit_b[i] == '1');
		ans += (bit_a[i] != bit_b[i]);
	}
	if (cnt1 != cnt0) {
		cout << -1 << '\n';
		return;
	}
	cout << ans << '\n';
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

