#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	if (n % 4 == 1) {
		cout << 0 << " A\n";
	} else if (n % 4 == 2) {
		cout << 1 << " B\n";
	} else if (n % 4 == 3) {
		cout << 2 << " A\n";
	} else if (n % 4 == 0) {
		cout << 1 << " A\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
