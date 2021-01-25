#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1005;
int a[mxN], b[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cin >> b[i];

	int x = a[0], y = b[0];
	for (int i = 0; i < n; i++) {
		x |= a[i];
		y |= b[i];
	}
	cout << x+y;
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


