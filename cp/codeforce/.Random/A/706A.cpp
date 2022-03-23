#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b;
	cin >> a >> b;
	int n;
	cin >> n;
	double mn = 10001;
	for (int i = 0; i < n; i++) {
		double x, y, z;
		cin >> x >> y >> z;
		double c = sqrt(pow(abs(x-a), 2)+ pow(abs(y-b), 2));
		mn = min(mn, (double)c/(double)z);
	}
	cout << fixed << setprecision(20) << mn << "\n";
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


