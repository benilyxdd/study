#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a != b && b != c && a != c) {
		cout << 0;
		return;
	}
	if (a == b && b == c) {
		cout << a;
		return;
	}
	if (a == b) {
		cout << c;
	} else if (b == c) {
		cout << a;
	} else if (a == c) {
		cout << b;
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

