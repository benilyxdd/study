#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	
	int x = n - 4;
	int y = x / 3;
	int z = y * 2;

	if (x % 3 == 2) {
		y++;
		z++;
	}

	cout << min(abs(1 - y), abs(y - z)) << '\n';
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

