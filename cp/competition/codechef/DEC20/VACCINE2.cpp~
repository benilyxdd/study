#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4+4, mxD = (int)1e5+5;
int n, d, ar[mxN];
int cnt[2];

void solve() {
	memset(cnt, 0, sizeof(cnt));
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i] >= 80 || ar[i] <= 9) {
			cnt[1]++;
		} else {
			cnt[0]++;
		}
	}
	ll ans = 0;
	ans += (cnt[1]%d == 0 ? cnt[1]/d : cnt[1]/d+1);
	ans += (cnt[0]%d == 0 ? cnt[0]/d : cnt[0]/d+1);
	cout << ans << "\n";
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

