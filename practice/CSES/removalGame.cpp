#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	list<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}

	ll ans = 0;
	for (int i = 0; i < n; i++) {
		int f = ar.front();
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

