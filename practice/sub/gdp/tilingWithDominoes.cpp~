//https://www.geeksforgeeks.org/tiling-with-dominoes/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4;
int n, a[mxN], b[mxN];

void solve() {
	cin >> n;

	a[0] = b[1] = 1;
	a[1] = b[0] = 0;

	for (int i = 2; i <= n; i++) {
		a[i] = a[i-2] + 2*b[i-1];
		b[i] = a[i-1] + b[i-2];
	}
	cout << a[n];
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

