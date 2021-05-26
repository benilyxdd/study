#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int f(int n) {
	int x = 0;
	return pow(10, n-1)*9;
}

void solve() {
	int n;
	cin >> n;
	
	int ans = 0;
	if (n < 10) {
		cout << n;
		return;
	}
	if (n > 9) {
		ans += 9;
	}

	int mx = 0;
	for (mx = 2; mx < 20; mx++) {
		if (n >= pow(10, mx)) {
			ans += f(mx)*mx;
		} else {
			break;
		}
	}
	ans += (n-pow(10, mx-1)+1)*mx;

	cout << ans;
}

signed main() {
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

