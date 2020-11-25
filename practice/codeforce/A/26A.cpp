#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	ll n;
	cin >> n;
	ll a[3001]={0};
	ll ans = 0;
	for (int i = 2; i <= n; i++) {
		for (int j = i-1; j >= 2; j--) {
			if (i%j==0 && a[j]==0) {
				a[i]++;
			}
		}
		if (a[i]==2) {
			ans++;
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


