#include <bits/stdc++.h>
using namespace std;

#define ll long long

set<int> s;

int findans(int x) {
	auto it = s.upper_bound(x);
	it--;
	return *it;
}

void remove(int x) {
	s.erase(x);
}

void solve() {
	int n, q;
	cin >> n >> q;
	int a[n+1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}

	s.insert(1);
	for (int i = 2; i <= n; i++) {
		if (a[i]%a[i-1] == 0) {
			continue;
		}
		s.insert(i);
	}

	while(q--) {
		int t, i;
		cin >> t >> i;
		if (t == 1) {
			cin >> a[i];
			if (i > 1) {
				if (findans(i) == i && a[i]%a[i-1] == 0) {
					remove(i);
				} else if (findans(i)<i && a[i]%a[i-1] != 0) {
					s.insert(i);
				}
			}
			if (i < n) {
				if (findans(i+1) > i && a[i+1]%a[i] == 0) {
					remove(i+1);
				} else if (findans(i+1) <= i && a[i+1]%a[i] != 0) {
					s.insert(i+1);
				}
			}
		} else {
			cout << findans(i) << "\n";
		}

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

