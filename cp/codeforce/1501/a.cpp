#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e2+2;
int n, ar[mxN];
array<int, 2> t[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> t[i][0] >> t[i][1];
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans = max(ans, t[i][0]) + ar[i];
		int de = (t[i][1]-t[i][0]+2-1)/2;
		int le = t[i][1]-ans;
		ans += max(de, le);
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

