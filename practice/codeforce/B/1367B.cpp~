#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int e = 0, o = 0;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if (a%2) {
			o++;
		} else {
			e++;
		}
		v.push_back(a);
	}
	if (n%2) {
		if (e != n/2+1 || o != n/2) {
			cout << -1 << "\n";
			return;
		}
	} else {
		if (e != n/2 || o != n/2) {
			cout << -1 << "\n";
			return;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (i%2 == 0) {
			if (v[i]%2) {
				cnt++;
			}
		} else {
			if (v[i]%2 == 0) {
				cnt++;
			}
		}
	}
	cout << cnt / 2 << "\n";
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

