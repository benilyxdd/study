#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = (int)1e5+5;
int n, k, ar[mxN];

void solve() {
	cin >> n >> k;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		sum += ar[i];
	}


	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (ar[i]%k == 0)
			cnt += ar[i]/k;
		else
			cnt += ar[i]/k+1;
	}
	int yo;
	if (sum%k == 0)
		yo = sum/k;
	else
		yo = sum/k+1;
	cout << yo  << " " << cnt << "\n";
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

