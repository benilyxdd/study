#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int k, n, m;
	cin >> k >> n >> m;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	vector<int> ans;
	int i = 0, j = 0;
	while (i < n || j < m) {
		int x = (i < n ? a[i] : INT_MAX);
		int y = (j < m ? b[j] : INT_MAX);
		if (x > y) {
			j++;
			if (y > k) {
				cout << -1 << '\n';
				return;
			}
			ans.push_back(y);
			if (y == 0) {
				k++;
			}
		} else {
			i++;
			if (x > k) {
				cout << -1 << '\n';
				return;
			}
			ans.push_back(x);
			if (x == 0) {
				k++;
			}
		}
	}
	for (int &x : ans) {
		cout << x << ' ';
	}
	cout << '\n';
}

int main() {
	// freopen("input3.txt", "r", stdin);
	// freopen("output3.txt", "w", stdout);
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

