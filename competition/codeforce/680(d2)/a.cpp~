#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, x; cin >> n >> x;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	sort(a, a+n);
	sort(b, b+n);
	reverse(b, b+n);
	for (int i = 0; i < n; i++) {
		if (a[i] + b[i] > x) {
			cout << "No\n";
			return;
		}
	}
	cout << "Yes\n";
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

