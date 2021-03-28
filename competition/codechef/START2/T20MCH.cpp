#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int r, o, c;
	cin >> r >> o >> c;
	int x = 20 - o;
	r -= c;

	int cnt = x*6*6;
	if (cnt > r) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

