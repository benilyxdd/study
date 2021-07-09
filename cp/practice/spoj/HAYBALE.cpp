#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> diff(n + 1);
	for (int i = 0; i < k; i++) {
		int l, r;
		cin >> l >> r;
		l--, r--;
		diff[l]++;
		diff[r + 1]--;
	}

	vector<int> cnt(n);
	ll total = 0;
	for (int i = 0; i < n; i++) {
		total += diff[i];
		cnt[i] = total;
	}

	sort(cnt.begin(), cnt.end());
	cout << cnt[n / 2] << '\n';
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

