#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	if (n%4 == 3 || n%4 == 0) {
		cout << "YES\n";
		if (n%4 == 0) {
			cout << n/2 << "\n";
			for (int i = 1; i <= n; i++) {
				if (i%4 == 1 || i%4 == 0) {
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << n/2 << "\n";
			for (int i = 1; i <= n; i++) {
				if (i%4 == 2 || i%4 == 3) {
					cout << i << " ";
				}
			}
		} else {
			cout << n/2 << "\n";
			cout << 3 << " ";
			for (int i = 5; i <= n; i++) {
				if (i%4 == 1 || i%4 == 2) {
					cout << i << " ";
				}
			}
			cout << "\n";
			cout << n/2+1 << "\n";
			cout << "1 2 ";
			for (int i = 4; i <= n; i++) {
				if (i%4 == 3 || i%4 == 0) {
					cout << i << " ";
				}
			}
		}
		cout << "\n";
	} else {
		cout << "NO\n";
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

