#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int n, m, k, ar[mxN];

void solve() {
	int cnt = 0;
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a == 1) {
			m--;
		} else {
			if (k <= 0) {
				m--;
			} else {
				k--;
			}
		}
	}
	cnt += max(0, 0-k) + max(0, 0-m);
	cout << cnt;
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


