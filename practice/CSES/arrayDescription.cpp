#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;
const int mxN = (int)1e5+5;
const int mxM = 100;
int n, m;
int a[mxN];

void solve() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) 
		cin >> a[i];
	
	ll ans = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			if (a[i-1] == 1 || a[i-1] == m) {
				ans = (ans*2)%MOD;
			}else {
				ans = (ans*3)%MOD;
			}
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

