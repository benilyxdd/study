#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	set<int> s;
	set<int> s2;
	s2.insert(ar[0]);
	for (int i = 1; i < n; i++) {
		s.insert(abs(ar[i]-ar[i-1]));
		s2.insert(ar[i]);
	}

	if (s2.size() == 1 || n == 2) {
		cout << 0 << '\n';
		return;
	}

	if (n == 3) {
		cout << -1 << '\n';
		return;
	}

	if (s.size() == 1) {
		auto x = s.begin();
		cout << *x+*x << ' ' << *x << '\n';
	} else {
		auto it = s.begin();
		int x = *it;
		it++;
		int y = *it;
		cout << x+y << ' ' << x << '\n';
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

