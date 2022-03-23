#include <bits/stdc++.h>
using namespace std;

#define ll long long
map<vector<int>, vector<int>> m;

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	if (m.find(ar) != m.end()) {
		vector<int> ans = m[ar];
		for (int& x : ans) {
			cout << x << ' ';
		}
		cout << '\n';
		return;
	}

	int mn = n;
	vector<int> ans(n, 0);
	for (int i = n-1; i >= 0; i--) {
		int x = ar[i];
		int y = i - x + 1;

		if (y < mn) {
			for (int j = max(y, 0); j < i+1; j++) {
				ans[j] = 1;
			}
		}

		mn = min(y, i);
		if (mn == 0) {
			break;
		}
	}

	for (int& x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
	m[ar] = ans;
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

