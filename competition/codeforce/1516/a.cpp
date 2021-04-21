#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ar(n);
	for (int& x : ar) {
		cin >> x;
	}
	ar[n - 1] += k;
	int i = 0;
	while (k > 0) {
		int mn = min(ar[i], k);
		k -= mn;
		ar[i] -= mn;
		i++;
	}
	for (int& x : ar) {
		cout << x << ' ';
	}
	cout << '\n';
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

