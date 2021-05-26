#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	int x = b%n, y;
	if (x < 0) {
		y = (n+x)+a;
	} else {
		y = a+x;
	}
	if (y%n == 0) {
		cout << n;
	} else {
		cout << y%n;
	}
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


