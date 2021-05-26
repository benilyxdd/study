#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int ans = 0;
	while(a != b) {
		if (a > b) {
			if (a-b > 4) {
				int temp = (a-b)/5;
				ans += temp;
				a -= temp * 5;
			} else if (a-b > 1) {
				int temp = (a-b)/2;
				ans += temp;
				a -= temp * 2;
			} else if (a-b > 0) {
				int temp = a-b;
				ans += temp;
				a -= temp;
			}
		} else {
			if (b-a > 4) {
				int temp = (b-a)/5;
				ans += temp;
				a += temp * 5;
			} else if (b-a > 1) {
				int temp = (b-a)/2;
				ans += temp;
				a += temp * 2;
			} else if (b-a > 0) {
				int temp = b-a;
				ans += temp;
				a += temp;
			}
		}
	}
	cout << ans << "\n";
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
