#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	cout << n << "\n";
	for (int i = 0; i < n; i++) {
		cout << i+1 << " ";
	}
	cout << "\n";
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

