#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)2e5+5;
int n, c;
array<int, 3> ar[mxN];

void solve() {
	cin >> n >> c;
	for (int i = 0; i < n; i++)
		cin >> ar[i][0] >> ar[i][1] >> ar[i][2];

	sort(ar, ar+n);
	int ans = 0;
	for (int i = 0; i < n; i++) {

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

