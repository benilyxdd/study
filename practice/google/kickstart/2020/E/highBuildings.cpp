#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, a, b, c;
	cin >> n >> a >> b >> c;

	int x = a+b-c;
	if (x > n || (x == 1 && n > 1)) {
		cout << "IMPOSSIBLE\n";
	} else if (n == 1) {
		cout << "1\n";
	} else if (n == 2) {
		if (c == 2) {
			cout << "1 1\n";
		} else if (a == 2) {
			cout << "1 2\n";
		} else if (b == 2) {
			cout << "2 1\n";
		}
	} else {
		vector<int> ans;
		for (int i = 0; i < a-c; i++) {
			ans.push_back(2);
		}
		for (int i = 0; i < c; i++) {
			ans.push_back(3);
		}
		for (int i = 0; i < b-c; i++) {
			ans.push_back(2);
		}
		int left = n-x;
		ans.insert(ans.begin()+1, left, 1);

		for (int& x : ans) {
			cout << x << ' ';
		}
		cout << '\n';
	}
}

int main() {
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
