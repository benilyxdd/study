#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 'Y') {
			cout << "Four\n";
			return;
		}
	}
	cout << "Three\n";
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

