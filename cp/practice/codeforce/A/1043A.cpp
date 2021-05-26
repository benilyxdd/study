#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int mx = 0, sum = 0;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		mx = max (a, mx);
		sum += a;
	}
	while(true) {
		if(mx*n > sum*2) {
			cout << mx << "\n";
			return;
		}
		mx++;
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
