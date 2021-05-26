#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, x, sum = 0;
	cin >> n >> m >> x;
	vector<array<int, 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i;
	}
	sort(ar.begin(), ar.end());
	vector<int> ans(n, 0);

	for (int i = 0; i < m; i++) {
		ans[ar[i][1]] = i + 1;
	}
	int now = 1;
	for (int i = 0; i < n; i++) {
		if (ans[ar[i][1]] == 0) {
			ans[ar[i][1]] = now;
			now++;
			if (now > m) {
				now = 1;
			}
		}
	}
	cout << "YES\n";
	for (int& z : ans) {
		cout << z << ' ';
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

