#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	while(n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (b%2) {
			if (a == 1) {
				if (c == 1) {
					cout << b/2;
				} else {
					cout << b - b/2;
				}
			} else {
				if (c == 1) {
					cout << b - b/2;
				} else {
					cout << b/2; 
				}
			}
		} else {
			cout << b/2;
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

