#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n, w;
map<int, int> m;

void solve() {
	m.clear();

	cin >> n >> w;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		m[ar[i]]++;
	}

	map<int, int> cnt;
	string s = bitset<32>(w).to_string();
	for (int i = 0; i < 32; i++) {
		if (s[i] == '1') {
			int x = pow(2, 32-i-1);
			cnt[x] = 1;
		}
	}

	for (pair<const int, int>& p : m) {
		int tar = p.first;
		if (cnt.find(tar) == cnt.end()) {
			int add = p.second/2;
			p.second %= 2;
			m[p.first*2] += add;
		}
	}
	
	int ans = 0, mn = mxN;
	for (pair<const int, int>& p : cnt) {
		mn = min(m[p.first], mn);
	}
	
	ans += mn;
	for (pair<const int, int>& p : cnt) {
		m[p.first] -= mn;
	}

	for (auto& x : m) {
		if (x.second != 0) {
			cout << x.first << ' ' << x.second << '\n';
		}
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

