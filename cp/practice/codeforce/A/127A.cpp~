#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b, x, y, x1, y1;
	cin >> a >> b;
	double t = 0;
	for (int i = 0; i < a; i++) {
		if (i == 0) {
			cin >> x1 >> y1;
		} else {
			cin >> x >> y;
			double dt = sqrt(abs(x-x1)*abs(x-x1) + abs(y-y1)*abs(y-y1));
			t += dt/50;
			x1 = x;
			y1 = y;
		}
	}

	double ans = t*b;
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


