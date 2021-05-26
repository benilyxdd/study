#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	double angle = (double) 180.0 / n;
	double real_angle = (double) (n - 2.0) * 180.0 / n;
	double first_area = (double) n * n * n / (4.0 * tan(angle * M_PI / 180.0));

	double temp = (double) n / 2.00;
	double temp2 = (double) temp * temp * 2 - (2 * temp * temp * cos(real_angle * M_PI / 180.0));
	double second_side = (double) sqrt(temp2);

	double second_area = (double) second_side * second_side * n / (4.0 * tan(angle * M_PI / 180.0));
	
	//cout << first_area << ' ' << second_area << '\n';
	double ans = (double)first_area / (first_area - second_area);
	cout << fixed << setprecision(15) << ans << '\n';
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


