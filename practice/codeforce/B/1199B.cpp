#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b;
	cin >> a >> b;
	//x*x = (h+x)*(h+x) + b*b;
	//x^2 = h^2+2hx+x^2 + b^2;
	//x^2 = h^2+x(2h+x) + b^2;
	cout << fixed << setprecision(20) << (b*b-a*a)/2/a << "\n";
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

