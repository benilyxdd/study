#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b, c;
	cin >> a >> b >> c;
	double d = a/(b+c);
	double ans = d*b;
	cout << fixed << setprecision(5) << ans << "\n";
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


