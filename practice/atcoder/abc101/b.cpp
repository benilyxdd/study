#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int x = n, s = 0;
	while (x > 0) {
		s += (x % 10);
		x /= 10;
	}
	// cout << s;
	cout << (n % s == 0 ? "Yes" : "No");
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

