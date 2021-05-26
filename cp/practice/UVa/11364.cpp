#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 21;
int ar[mxN], n;

void solve() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> ar[i];

	sort(ar, ar+n);
	int ans = 0;
	ans += ar[n-1]-ar[0];
	cout << ans*2 << "\n";
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


