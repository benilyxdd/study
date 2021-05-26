#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 61;
int ar[mxN], n, k;
int cnt[mxN];

void solve() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		cnt[ar[i]]++;
	}

	ll ans = 1;
	for (int i = 0; i < mxN; i++) {
		if (cnt[i]) {
			ans *= 
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

