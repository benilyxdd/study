#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	double n = 2000;
	for (int i = 0; i < 365; i++) {
			n *= 1.01;
	}
	cout << fixed << n;
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

