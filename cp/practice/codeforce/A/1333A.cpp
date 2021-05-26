#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (i == 0 && j == 0) {
				cout << "W";
			} else {
				cout << "B";
			}
		}
		cout << "\n";
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


