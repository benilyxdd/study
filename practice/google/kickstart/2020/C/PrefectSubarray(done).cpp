#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define int ll

void solve() {
	int a, n, count = 0, sum = 0, minsum = 0;
	cin >> n;
	unordered_map<int, int> m;
	m[0] = 1;
	while(n--) {
		cin >> a;
		sum += a;
		minsum = min(sum, minsum);
		for (int i = 0; sum-i*i >= minsum; i++) {
			int n = sum-i*i;
			if (m.count(n) == 1) {
				count += m[n];
			}
		}
		m[sum]++;
	}
	cout << count << "\n";
}

signed main() {
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
