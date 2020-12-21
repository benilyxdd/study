#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
array<int, 2> ar[mxN];
int n, m, ct[mxN];

void solve() {
	set<pair<int, int>> s;
	memset(ct, 0, sizeof(ct));
	cin >> n >> m;
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		cin >> ar[i][0] >> ar[i][1];
		if (ar[i][0] != ar[i][1]) {
			cnt++;
	
			pair<int, int> p = {ar[i][0], ar[i][1]};
			if (p.first < p.second) {
				swap(p.second, p.first);
			}

			bool fu = false;
			int sz = s.size();
			s.insert(p);
			if (s.size() == sz) {
				cnt++;
				fu = true;
			}

			if (!fu) {
				ct[ar[i][0]]++;
				ct[ar[i][1]]++;
			}
		}
	}
	int temp = 0;
	for (int i = 1; i <= n; i++) {
		if (ct[i] == 2) {
			temp++;
		}
	}
	if (temp >= 3)
		cnt++;
	cout << cnt << "\n";
}

signed main() {
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

