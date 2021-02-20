#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	set<int, greater<const int>> s;
	for (int i = 1; i*i <= n; i++) {
		if (n%i == 0) {
			s.insert(i);
			s.insert(n/i);
		}
	}
	for (const int& x : s) {
		cout << x << " ";
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

