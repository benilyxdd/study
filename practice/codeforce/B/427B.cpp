#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)2e5+5;
int n, t, c, ar[mxN];

void solve() {
	cin >> n >> t >> c;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i] <= t) {
			int x = 0;
			while(ar[i] <= t && i < n) {
				i++, x++;
			}
			ans += max(0, x-c+1);
		}
	}
	cout << ans;
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

