#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int n;
	while(cin >> n) {
		if (n == 0) 
			return;
		bool ok = false;
		int x = sqrt(n);
		if (x*x == n) 
			ok = 1;
		cout << (ok ? "yes" : "no") << "\n";
	}
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


