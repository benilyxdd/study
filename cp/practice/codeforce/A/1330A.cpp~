#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	set<int> s;
	for (int i = 0; i < a; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	vector<int> v;
	v.push_back(0);
	for (const int& x : s) {
		v.push_back(x);
	}

	int ans = 0;
	for (int i = 1; i < v.size(); i++) {
		int n = v[i] - v[i-1] - 1;
		if (b >= n) {
			b -= n;
			ans = v[i];
		} else {
			break;
		}
	}
	ans += b;
	cout << ans << "\n";
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


