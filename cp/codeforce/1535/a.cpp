#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> ar(4);
	for (int &x : ar) {
		cin >> x;
	}
	int f = max(ar[0], ar[1]);
	int s = max(ar[2], ar[3]);
	sort(ar.rbegin(), ar.rend());
	if (f > s) {
		swap(s, f);
	}
	if (ar[0] == s && ar[1] == f) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

