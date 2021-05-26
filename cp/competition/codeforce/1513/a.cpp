#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;

	int all = (n - 2 + 2 - 1) / 2;
	if (k > all) {
		cout << -1 << '\n';
		return;
	}

	vector<int> ar(n);
	for (int i = 0; i < n; i++) {
		ar[i] = i + 1;
	}

	for (int i = 1, j = 0; i < n-1 && j < k; i += 2, j++) {
		swap(ar[i], ar[i + 1]);
	}

	for (int i = 0; i < n; i++) {
		cout << ar[i] << ' ';
	}
	cout << '\n';
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

