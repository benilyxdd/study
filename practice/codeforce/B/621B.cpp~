#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 10000;
int n;
map<int, int> f, l;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		f[x+y]++;
		l[x-y]++;
	}
	
	int ans = 0;
	for (pair<const int, int>& pa : f) {
		int sec = pa.second;
		if (sec > 1) {
			int temp = sec*(sec-1)/2;
			ans += temp;
		}
	}
	for (pair<const int, int>& pa : l) {
		int sec = pa.second;
		if (sec > 1) {
			int temp = sec*(sec-1)/2;
			ans += temp;
		}
	}
	cout << ans << "\n";
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

