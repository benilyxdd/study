#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0 ; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (3*i+5*j+7*k == n) {
					cout << i << " " << j << " " << k << "\n";
					return;
				}
			}
		}
	}
	cout << -1 << "\n";
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

