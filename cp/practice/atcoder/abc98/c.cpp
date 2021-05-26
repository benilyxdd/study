#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string s;
	cin >> n >> s;

	// prefix -> E, suffix -> W
	vector<int> prefix(n, 0), suffix(n, 0);
	for (int i = 1; i < n; i++) {
		prefix[i] = prefix[i - 1] + (s[i - 1] != 'E');
	}
	for (int i = n - 2; i >= 0; i--) {
		suffix[i] = suffix[i + 1] + (s[i + 1] != 'W');
	}
	// for (int& x : prefix) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';
	// for (int &x : suffix) {
	// 	cout << x << ' ';
	// }
	// cout << '\n';
	int mn = (int)1e7;
	for (int i = 0; i < n; i++) {
		mn = min(mn, prefix[i] + suffix[i]);
	}
	cout << mn;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

