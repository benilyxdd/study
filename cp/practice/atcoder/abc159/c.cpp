#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	double n;
	cin >> n;
	double ans = 1;
	ans *= n/3 * n/3 * n/3;
	cout << fixed << setprecision(15) << ans << "\n";
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

