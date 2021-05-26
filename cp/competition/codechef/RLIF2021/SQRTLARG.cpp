#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	double x = (double)sqrt(n);
	cout << fixed << setprecision(k) << x << '\n';
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

