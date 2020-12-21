#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x, y, k, n;
	cin >> x >> y >> k >> n;
	int diff = abs(x-y);
	if (diff%k == 0 && (diff/k)%2 == 0) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
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

