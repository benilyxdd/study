#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

void solve() {
	int a, b;
	cin >> a >> b;
	set<int> ar;
	for (int i = 1; i * i <= a; i++) {
		if (a % i == 0) {
			ar.insert((ll)i);
			ar.insert((ll)a/i);
		}
	}
	if (ar.size() < b) {
		cout << -1;
	} else {
		auto it = next(ar.begin(), b-1);
		cout << *it;
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


