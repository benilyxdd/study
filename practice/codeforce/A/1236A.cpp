#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	if (b*2 >= c) {
		ans += c/2;
		b -= c/2;
		if (c % 2){
			ans += c-1;
		} else {
			ans += c;
		}
		if (a*2 >= b) {
			ans += b/2;
			if (b % 2) {
				ans += b-1;
			} else {
				ans += b;
			}
		} else {
			ans += a * 3;
		}
		cout << ans << "\n";
	} else {
		cout << b * 3 << "\n";
		return;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
