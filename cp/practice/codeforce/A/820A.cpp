#include <bits/stdc++.h>
using namespace std;

#define ll long long
int c, v0, v1, a, l;

void solve() {
	cin >> c >> v0 >> v1 >> a >> l;
	int left = c-v0;
	int ans = 1;
	if (left <= 0) {
		cout << 1 << "\n";
	} else {
		for (int i = 1; left > 0; i++) {
			int x = v0+i*a;
			x = min(x, v1);
			x -= l;
			left -= x;
			ans++;
		}
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


