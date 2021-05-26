#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1000;
int n, k, ar[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	int ans = 0;
	for (int i = 1; i < n; i++) {
		int x = k-ar[i-1];
		if (x > ar[i]) {
			ans -= ar[i]-x;
			ar[i] = x;
		}
	}	
	cout << ans << "\n";
	for (int i = 0; i < n; i++)
		cout << ar[i] << " ";
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

