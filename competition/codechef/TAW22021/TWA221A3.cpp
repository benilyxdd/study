#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int cnt = 0;
	while (a > 0 || b > 0) {
		if (a == 0 || b == 0) {
			break;
		}
		if (a > b) {
			cnt += a / b;
			a %= b;
		} else {
			cnt += b / a;
			b %= a;
		}
	}
	cout << cnt << '\n';
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
