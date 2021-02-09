#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5+5;
int n, ar[mxN];

void solve() {
	ar[0] = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> ar[i];
	/*
	int cnt = 0, en = 0;
	for (int i = 1; i <= n; i++) {
		int x = ar[i-1]-ar[i];
		en += x;
		if (en < 0) {
			cnt -= en;
			en = 0;
		}
	}
	cout << cnt;
	*/
	int mx = 0;
	for (int i = 1; i <= n; i++) {
		mx = max(mx, ar[i]);
	}
	cout << mx;
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

