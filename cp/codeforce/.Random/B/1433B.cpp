#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, f = -1, l;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (f == -1 && a[i] == 1)
			f = i;
		if (a[i] == 1)
			l = i;
	}
	
	int ans = 0;
	for (int i = f; i < l; i++) 
		if (a[i] == 0)
			ans++;

	cout << ans << "\n";

}

int main() {
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

