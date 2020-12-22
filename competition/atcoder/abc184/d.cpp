#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	double a, b, c;
	cin >> a >> b >> c;
	double x = 100-a;
	double y = 100-b;
	double z = 100-c;
	double t = a+b+c;
	double ans = x*a/t + x*b/t; + x*c/t;
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

