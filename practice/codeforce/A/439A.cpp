#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int total = 0;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		total += x;
	}
	total += (a-1)*10;
	if (total > b) {
		cout << -1 << "\n";
	} else {
		int ans = (a-1)*2;
		ans += (b-total)/5;
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


