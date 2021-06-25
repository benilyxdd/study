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
	vector<array<int, 2>> test(n);
	for (int i = 0; i < n; i++) {
		test[i][0] = ar[i];
		test[i][1] = i + 1;
	}
	sort(test.begin(), test.end());

	int ans = 0;
	for (int i = 0; i < n; i++) {
		int mx = i + 1 + n, j = 0;
		for (int j = 0; j < n; j++) {
			if (test[j][0] != ar[i]) {
				ll product = test[j][0] * ar[i];
				int sum = test[j][1] + i + 1;
				if (product > mx) {
					break;
				}
				if (product == sum && test[j][1] < i + 1) {
					ans++;
				}
			}
		}
	}
	cout << ans << '\n';
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

