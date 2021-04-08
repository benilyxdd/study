#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, d;
	cin >> n >> d;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	int ans = 0;
	for (int i = 0; i < n - 1; i++) {
		if (ar[i] >= ar[i+1]) {
			int x = (ar[i] - ar[i+1] + 1 + d - 1) / d;
			ar[i+1] += x * d;
			ans += x;
		}
	}
	cout << ans << '\n';
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


