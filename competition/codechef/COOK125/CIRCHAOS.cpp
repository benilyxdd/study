#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

int lar(int n, int gcd) {
	int lar = 0;
	for (int i = 1; i*i <= gcd; i++) {
		if (gcd%i == 0) {
			if (i <= n) {
				lar = max(lar, i);
			}
			if (gcd/i <= n) {
				lar = max(lar, gcd/i);
			}
		}
	}
	return lar;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int ar[m];
	for (int i = 0;	i < m; i++)
		cin >> ar[i];
	
	int gcd = ar[0];
	for (int i = 1; i < m; i++) 
		gcd = __gcd(gcd, ar[i]);

	if (gcd <= n) {
		cout << n-gcd << "\n";
	} else {
		cout << n-lar(n, gcd) << "\n";
	}
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

