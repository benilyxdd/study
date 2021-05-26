#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int i = 1;
	while(a >= 0 && b >= 0) {
		if (i % 2) {
			a -= i;
		} else {
			b -= i;
		}
		i++;
	}
	cout << (a < 0 ? "Vladik" : "Valera") << "\n";
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
