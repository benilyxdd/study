#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, k;
	cin >> a >> b >> k;
	set<int> s;
	for (int i = 0; i < k; i++) {
		if (a + i <= b) {
			s.insert(a + i);
		}
	}
	for (int i = 0; i < k; i++) {
		if (b - i >= a) {
			s.insert(b - i);
		}
	}
	for (const int& x : s) {
		cout << x << '\n';
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

