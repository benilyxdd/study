#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int n = a-1;
	int ans = 0;
	if (n <= b) {
		cout << n << "\n";
		return;
	} else {
		ans = b;
	}
	for (int i = 2; i <= n-b+1; i++) {
		ans += i;
	}
	cout << ans << "\n";
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


