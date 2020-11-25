#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, ans = 0, a;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());
	
	for (int i = 0; i < n; i++) {
		if (i%2) {
			ans -= v[i];
		} else {
			ans += v[i];
		}
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

