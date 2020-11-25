#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	vector<int> a, b;
	for (int i = 0; i < n*2; i++) {
		int x;
		cin >> x;
		if (i < n) {
			a.push_back(x);
		} else {
			b.push_back(x);
		}
	}
	int x = 0, y = 0;
	for (int i = 0; i < n ; i++) {
		if (a[i] == 1 && b[i] == 0) {
			x++;
		}
		if (a[i] == 0 && b[i] == 1) {
			y++;
		}
	}
	if (x == 0) {
		cout << -1 << "\n";
	} else {
		cout << ((y+1)%x==0 ? (y+1)/x : (y+1)/x+1) << "\n";
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


