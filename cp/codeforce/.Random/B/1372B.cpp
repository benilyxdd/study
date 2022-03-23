#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	if (n%2 == 0) {
		cout << n/2 << " " << n/2 << "\n";
		return;
	}
	int p = 0;
	for (int i = 2; i <= 100000; i++) {
		if (n%i == 0) {
			p = i;
			break;
		}
	}
	if (p == 0) {
		p = n;
	}
	cout << n/p << " " << n-n/p << "\n";
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

