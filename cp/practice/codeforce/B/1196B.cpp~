#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k; cin >> n >> k;
	int d[n];
	int odd = 0;
	for (int i = 0; i < n; i++) {
		cin >> d[i];
		if (d[i]%2) {
			odd++;
		}
	}
	
	if (odd%2 != k%2|| odd < k) {
		cout << "NO\n";
		return;
	}
	
	cout << "YES\n";
	for (int i = 0; i < n; i++) {
		if (k == 1) break;
		if (d[i]%2) {
			cout << i+1 << " ";
			k--;
		}
	}
	cout << n << "\n";
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

