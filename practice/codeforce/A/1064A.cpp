#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int x = 0;
	while(true) {
		if ((a + b) > c && (a + c) > b && (b + c) > a) {
			cout << x << "\n";
			return;
		} else {
			int mn = min(a, min(b ,c));
			if (mn == a) {
				a++;
				x++;
			} else if (mn == b) {
				b++;
				x++;
			} else {
				c++;
				x++;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
