#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n, target;
	cin >> n >> target;
	vector<array<int, 2>> ar(n);
	for (int i = 0; i < n; i++) {
		cin >> ar[i][0];
		ar[i][1] = i + 1;
	}
	sort(ar.begin(), ar.end());
	for (int i = 0; i < n; i++) {
		int l = 0, r = n - 1, tar = target - ar[i][0];
		while (l != r) {
			int temp = ar[r][0] + ar[l][0];
			if (l != i && r != i && temp == tar) {
				cout << ar[i][1] << ' ' << ar[r][1] << ' ' << ar[l][1] << '\n';
				return;
			}
			if (temp < tar) {
				l++;
			} else {
				r--;
			}
		}
	}
	cout << "IMPOSSIBLE\n";
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

