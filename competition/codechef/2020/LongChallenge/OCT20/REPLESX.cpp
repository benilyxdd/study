#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, x, p, k;
	cin >> n >> x >> p >> k;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	
	int ans = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (v[i] <= x && i != k-1) {
			cnt++;
		}
	}
	if (cnt < k-1) {
		cout << -1 << "\n";
		return;
	}
	while(v[p-1] != x) {
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


