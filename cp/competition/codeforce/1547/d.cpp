#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}

	vector<string> bit(n);
	for (int i = 0; i < n; i++) {
		bit[i] = bitset<32>(ar[i]).to_string();
	}

	vector<string> ans(n, bitset<32>(0).to_string());
	for (int i = 1; i < n; i++) {
		string x = bit[i - 1];
		string y = bit[i];
		for (int j = 0; j < 32; j++) {
			if (x[j] == '1') {
				if (y[j] == '0') {
					ans[i][j] = '1';
					bit[i][j] = '1';
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		int x = stoi(ans[i], nullptr, 2);
		cout << x << ' ';
	}
	cout << '\n';
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

