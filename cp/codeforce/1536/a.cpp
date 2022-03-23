#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> ar(n);
	for (int &x : ar) {
		cin >> x;
	}
	sort(ar.begin(), ar.end());
	if (ar[0] < 0) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		cout << ar.back() + 1 << '\n';
		for (int i = 0; i <= ar.back(); i++) {
			cout << i << ' ';
		}
		cout << '\n';
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

