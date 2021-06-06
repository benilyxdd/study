#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if (a == b) {
		cout << a;
	} else {
		if (b > a) {
			swap(a, b);
		}
		if (a == 0) {
			if (b == 1) {
				cout << 2;
			} else if (b == 2) {
				cout << 1;
			}
		} else if (a == 1) {
			if (b == 2) {
				cout << 0;
			} else if (b == 0) {
				cout << 2;
			}
		} else if (a == 2) {
			if (b == 0) {
				cout << 1;
			} else if (b == 1) {
				cout << 0;
			}
		}
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

