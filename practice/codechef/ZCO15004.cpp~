#include <bits/stdc++.h>

using namespace std;

#define ll long long

int mx2(int a, int b) {
	int c = a * 500;
	int d = abs(100000-a) * 500;
	int e = b * 100000;
	int f = abs(500-b) * 100000;
	return max({c,d,e,f});
}

void solve() {
	int n;
	cin >> n;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		mx = max(mx, mx2(a, b));
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

