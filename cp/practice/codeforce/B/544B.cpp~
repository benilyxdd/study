#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	cin >> n >> k;

	int mx = (n*n+2-1)/2;
	if (k > mx) {
		cout << "NO";
		return;
	}

	cout << "YES\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x = i+j;
			if (x&1) {
				cout << 'S';
			} else {
				if (k > 0) {
					cout << 'L';
					k--;
				} else {
					cout << 'S';
				}
			}
		}
		cout << "\n";
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

