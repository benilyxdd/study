#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int x, y;
	cin >> x >> y;
	if (y > x + 1 || y == 0 || y == 1 && x > 0) {
		cout << "No";
		return;
	}

	int left = x - y + 1;
	cout << (left % 2 == 0 ? "Yes" : "No");
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


