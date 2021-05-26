#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	char ver[4] = {'v', '<', '^', '>'};
	char a, b;
	cin >> a >> b;
	int x, y;
	for(int i = 0; i < 4; i++) {
		if (a == ver[i]) {
			x=i;
		}
		if (b == ver[i]) {
			y=i;
		}
	}
	int n;
	cin >> n;

	int xdd = (y-x+4)%4;
	if (xdd == 0 || xdd == 2) {
		cout << "undefined";
	} else if (xdd == n%4) {
		cout << "cw";
	} else {
		cout << "ccw";
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


