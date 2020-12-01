#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 1; i <= 2000; i++) {
		int x = i*(i+1)/2;
		if (x == n) {
			ans = i;
			break;
		} else if (x > n) {
			if (x-n > 1) {
				ans = i;
				break;
			} else {
				ans = i+1;
				break;
			}
		}
	}
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);;

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

