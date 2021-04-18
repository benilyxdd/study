#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, q;
	cin >> n >> q;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	vector<int> cnt(32, 0);
	for (int& x : ar) {
		string x_str = bitset<32>(x).to_string();
		for (int i = 0; i < 32; i++) {
			if (x_str[i] == '1') {
				cnt[i]++;
			}
		}
	}
	string f_ans;
	for (int i = 0; i < 32; i++) {
		if (cnt[i] > 0) {
			f_ans += '1';
		} else {
			f_ans += '0';
		}
	}
	bitset<32> f_ans_ans(f_ans);
	cout << f_ans_ans.to_ulong() << '\n';

	for (int i = 0; i < q; i++) {
		int x, v;
		cin >> x >> v;
		string x_str = bitset<32>(ar[x - 1]).to_string();
		string v_str = bitset<32>(v).to_string();
		for (int j = 0; j < 32; j++) {
			if (x_str[j] == '1') {
				cnt[j]--;
			}
			if (v_str[j] == '1') {
				cnt[j]++;
			}
		}
		string ans;
		for (int j = 0; j < 32; j++) {
			if (cnt[j] > 0) {
				ans += '1';
			} else {
				ans += '0';
			}
		}
		bitset<32> ans_bit(ans);
		cout << ans_bit.to_ulong() << '\n';
	}
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

