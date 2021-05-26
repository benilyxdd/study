#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	for (int i = n-1; i >= 0; i--) {
		if (v[i] <= i+1) {
			cout << i+2 << "\n";
			return;
		}
	}
	cout << 1 << "\n";
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

