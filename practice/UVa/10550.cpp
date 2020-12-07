#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a, b, c, d;

void solve() {
	while(1) {
		cin >> a >> b >> c >> d;
		if (a == 0 && b == 0 && c == 0 && d == 0) {
			cout << 1890 << "\n";
			return;
		}
		int ans = 1080;
		ans += (a-b+40)%40 *9;
		ans += (c-b+40)%40 *9;
		ans += (c-d+40)%40 *9;
		cout << ans << "\n";
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


