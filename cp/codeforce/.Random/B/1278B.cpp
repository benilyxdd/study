#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int d = abs(a-b);
	int x = 1;
	if (d == 0) {
		cout << 0 << "\n";
		return;
	}
	while(true) {
		int s = x*(x+1)/2;
		if ((d+s)%2 == 0 && (d+s)/2 <= s) {
			break;
		}
		x++;
	}
	cout << x << "\n";
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

