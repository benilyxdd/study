#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];
	sort(a, a+n);
	sort(b, b+m);
	int ans = 0;
	for (int i = 0, j = 0; i < n; i++) {
		while(j<m && b[j] < a[i]-k)
			j++;
		if (j<m && b[j] <= a[i]+k)
			ans++, j++;
	}
	cout << ans << "\n";
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

