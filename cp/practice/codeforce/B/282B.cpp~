#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define int ll
const int mxN = 1e6+6;
array<int, 2> ar[mxN];
int n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1];

	int a = 0, g = 0;
	for (int i = 0; i < n; i++) {
		if (abs(a+ar[i][0]-g) <= 500) {
			a += ar[i][0];
			cout << 'A';
		} else {
			g += ar[i][1];
			cout << 'G';
		}
	}
}

signed main() {
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

