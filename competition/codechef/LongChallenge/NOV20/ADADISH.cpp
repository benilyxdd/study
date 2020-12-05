#include <bits/stdc++.h>
using namespace std;

#define ll long long

pair<bool, int> ok(int a[], int n, int sum) {
	unsigned int x = pow(2, n);
	int md = 999;
	for (int i = 1; i < x; i++) {
		int y = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1<<j)) {
				y += a[j];
			}
		}
		if (y == sum/2 && !(sum&1)) {
			return {true, 0};
		} else {
			md = min(md, abs(sum-y-y));
		}
	}
	return {false, md};
}

void solve() {
	int sum = 0;
	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	sort(a, a+n, greater<>());
	if (n == 1 || n == 2) {
		cout << a[0] << "\n";
	} else {
		pair<bool, int> xd = ok(a, n, sum);
		if (xd.first) {
			cout << sum/2 << "\n";
			return;
		} else {
			cout << (sum+xd.second)/2 << "\n";
		}
	}
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

