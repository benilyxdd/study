#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, l, r, s;
	cin >> n >> l >> r >> s;

	int all = r - l + 1;
	int mx = (n + n - all + 1) * all / 2;
	int mn = (1 + all) * all / 2;
	if (s > mx || s < mn) {
		cout << -1 << '\n';
		return;
	}

	int lo = 1, hi = n - all + 1;
	// while (lo < hi) {
	// 	int mid = (lo + hi) / 2;
	// 	int sum = (mid + mid + all - 1) * all / 2;
	// 	int last = mid + all - 1;
	// 	int mx_diff = n - last;
	// 	if (s - sum < mx_diff) {
	// 		for (int i = mid; i < mid + all - 1; i++) {
	// 			cout << i << ' ';
	// 		}
	// 		cout << mid + all + s - sum << '\n';
	// 		return;
	// 	}
	// 	if (sum > s) {
	// 		hi = mid - 1;
	// 	} else if (sum < s) {
	// 		lo = mid + 1;
	// 	}
	// }
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

