#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	if (b == 1) {
		cnt++, b++;
	}

	while(a >= b) {
		if (a%b == 0) {
			b++;
		} else {
			a /= b;
		}
		cnt++;
	}
	cout << cnt << "\n";
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

