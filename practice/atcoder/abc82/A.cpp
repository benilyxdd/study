#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	double a, b;
	cin >> a >> b;
	double c = (a+b)/2;
	cout << ceil(c) << "\n";
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

