#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> ar(n, 0);
	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		ar[a] = 1;
	}
	int left = 0, right = 0;
	for (int i = 0; i < x; i++) {
		left += ar[i];
	}
	for (int i = x; i < n; i++) {
		right += ar[i];
	}
	cout << min(left, right);
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

