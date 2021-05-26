#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, ans = 0;
	cin >> n;
	
	while (n > 1) {
		int lo = 1, hi = 1e9;

		while (lo < hi) {
			int mid = (lo + hi) / 2;
			
			int get = mid * (mid + 1) / 2 * 3 - mid;
			if (get == n) {
				n = 0;
				break;
			} else if (get > n) {
				hi = mid - 1;
			} else if (get < n) {
				lo = mid + 1;
			}
		}

		if (n == 0) {
			ans++;
			break;
		}
		
		int f = lo * (lo + 1) * 3 / 2 - lo;
		if (f > n) {
			lo--;
			f = lo * (lo + 1) * 3 / 2 - lo;
			n -= f;
			ans += (n >= 0);
			continue;
		}
		n -= f;
		ans += (n >= 0);
	}

	cout << ans << '\n';
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

