#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4+4;
int n, m, a, b, c;
int cnt[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		cnt[b-1] += c;
		cnt[a-1] -= c;
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (cnt[i] > 0) {
			ans += cnt[i];
		}
	}
	cout << ans << "\n";
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

