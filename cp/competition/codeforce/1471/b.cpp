#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int n, x, ar[mxN];

void solve() {
	cin >> n >> x;
	int sum = 0;
	int ar2[n];
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += ar[i];
		ar2[i] = ar[i];
	}

	int i = 0;
	while(true) {
		if (ar[i]%x != 0)
			break;
		
		sum += ar2[i];
		ar[i]/=x;

		i++;
		if (i == n)
			i = 0;
	}
	cout << sum << "\n";
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

