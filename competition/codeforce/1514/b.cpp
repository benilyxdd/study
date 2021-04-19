#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9 + 7;

int cal(int z, int k, int n) {
	
}

void solve() {
	int n, k;
	cin >> n >> k;

	ll cnt = 0;
	for (int i = 1; i < (1 << k); i++) {
		string s = bitset<32>(i).to_string();
		int z = 0;
		for (int j = 0; j < 32; j++) {
			if (s[j] == '0') {
				z++;
			}
		}
		z = z - (32 - k);
		cnt = (cnt + cal(z, k, n)) % MOD;
	}
	cout << cnt << '\n';
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

