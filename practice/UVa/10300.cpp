#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 21;
int a, b, c, n;

void solve() {
	cin >> n;
	ll sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		sum += a*c;
	}
	cout << sum << "\n";
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


