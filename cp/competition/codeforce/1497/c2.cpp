#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void debug(vector<int> de) {
	for (int& x : de) {
		cout << x << ' ';
	}
	cout << '\n';
}

void solve() {
	int n, k;
	cin >> n >> k;
	
	cout << log2(n) << '\n';

	string s = bitset<32>(n).to_string();
	int cnt = 0;
	vector<int> ok(32, 0);
	for (int i = 0; i < 32; i++) {
		if (s[i] == '1') {
			cnt++;
			ok[i]++;
		}
	}
	//cout << "CNT: "<< cnt << '\n';
	for (int i = 0; i < 31; i++) {
		int x = pow(2, 31-i-1);
		if (x > n/2) {
			ok[i+1] += ok[i]*2;
			ok[i] = 0;
		}
	}

	debug(ok);



	for (int i = 31; i >= 0; i--) {
		for (int j = 0; j < ok[i]; j++) {
			cout << pow(2, 31-i) << ' ';
		}
	}
	cout << '\n';
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

