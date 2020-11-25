#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int mx = -1e9;
	for (int i = 0; i < a; i++) {
		int c, d;
		cin >> c >> d;
		int temp;
		if (b < d) {
			temp = c - (d-b);
		} else {
			temp = c;
		}
		mx = max(temp, mx);
	}
	cout << mx << "\n";
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


