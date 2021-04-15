#include <bits/stdc++.h>
using namespace std;

#define ll long long

set<int> p(int n) {
	set<int> s;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			s.insert(i);
			while (n % i == 0) {
				n /= i;
			}
		}
	}
	return s;
}

void solve() {
	int a, b;
	bool ok = true;
	cin >> a >> b;
	set<int> a_s = p(a), b_s = p(b);
	for (const int& x : a_s) {
		if (b_s.count(x)) {
			ok = 0;
		}
	}
	if (!ok) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
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

