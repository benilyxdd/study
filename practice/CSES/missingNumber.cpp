#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[n-1];
	for (int i = 0; i < n-1; i++) cin >> a[i];
	sort(a, a+n-1);
	for (int i = 0, j = 1; i < n-1; i++, j++) {
		if (a[i] != j) {
			cout << j << "\n";
			return;
		}
	}
	cout << n << "\n";
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

