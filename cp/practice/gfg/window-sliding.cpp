#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	//invalid situtaion
	if (k > n) {
		cout << "invalid\n";
		return;
	}

	//valid situation
	int fsum = 0;
	for (int i = 0; i < k; i++) {
		fsum += ar[i];
	}

	int mx = fsum;
	for (int i = 0, j = k; j < n; i++, j++) {
		fsum += ar[j];
		fsum -= ar[i];
		mx = max(mx, fsum);
	}
	cout << mx << '\n';
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

