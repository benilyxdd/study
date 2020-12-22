#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, ar[mxN];

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int x = 0;
	for (int i = 0; i < n; i++) {
		x = __gcd(x, ar[i]);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += ar[i]/x;
	}
	cout << x << " " << cnt << "\n";
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

