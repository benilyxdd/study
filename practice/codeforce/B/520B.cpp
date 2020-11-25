#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b; cin >> a >> b;
	int ans = 0;
	while(a < b) {
		ans++;
		if (b%2) {
			b++;
		} else {
			b/=2;
		}
	}
	cout << ans + a-b;
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
