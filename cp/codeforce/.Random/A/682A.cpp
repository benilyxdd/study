#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
int n, m;

void solve() {
	cin >> n >> m;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		cnt += m/5;
		cnt += 5-i%5 <= m%5;
	}
	cout << cnt;
}

signed main() {
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


