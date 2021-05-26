#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n, l, r;
	cin >> n >> l >> r;
	int mn = 0;
	if (l == 1) {
		mn = l*n;
	} else {
		for (int i = 1; i < l; i++) {
			mn += pow(2, i);
		}
		mn += n-l+1;
	}
	int mx = 0;
	int g = 0;
	for (int i = 0; i < r; i++) {
		mx += pow(2, g);
		if (g < r-1) {
			g++;
		}
	}
	mx += pow(2, g) * (n-r);

	cout << mn << " " << mx << "\n"; 
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

