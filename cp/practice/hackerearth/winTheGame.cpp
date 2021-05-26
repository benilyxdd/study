#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(6) << a/(a+b) << "\n";
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

