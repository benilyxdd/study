#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	double x = (double) a / b;
	double temp = (double) c / d;
	double y = (double) (1.0 - x) * (1.0 - temp);

	cout << fixed << setprecision(15) << (double) x / (1 - y) << '\n';
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

