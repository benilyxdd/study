#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN];

void solve() {
	int a, n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> a;
		ar[a]++;
	}

	int ans = 0;
	int mx = *max_element(ar, ar+n);
	int lar;
	if (mx%k == 0) {
		lar = mx;
	} else {
		lar = mx/k;
		lar = lar*k+k;
	}

	for (int i = 0; i < 101; i++) {
		if (ar[i] != 0) {
			ans += lar-ar[i];
		}
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


