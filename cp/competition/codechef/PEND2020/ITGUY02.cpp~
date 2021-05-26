#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n*2-1; j++) {
			if (i == n-1) {
				cout << '*';
			} else {
				if (j == n+x-1 || j == n-x-1) {
					cout << '*';
				} else {
					cout << ' ';
				}
			}
		}
		cout << "\n";
		x++;
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

