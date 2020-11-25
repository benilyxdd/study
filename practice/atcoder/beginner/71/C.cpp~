#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.rbegin(), v.rend());
	
	int j = 0;
	ll x = 1;
	for (int i = 0; i < n; i++) {
		if (v[i] == v[i+1]) {
			x *= v[i];
			j++;
			i++;
			if (j == 2) {
				break;
			}
		}
	}
	if (j < 2) {
		x = 0;
	}
	cout << x << "\n";
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

