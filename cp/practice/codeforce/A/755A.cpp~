#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int x = 1;
	while(true) {
		int a = n * x + 1;
		for (int i = 2; i < a; i++) {
			if (a % i == 0) {
				cout << x << "\n";
				return;
			}
		}
		x++;
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
