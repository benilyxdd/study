#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100001;
int n, h, k, ar[mxN];

void solve() {
	cin >> n >> h >> k;
	for (int i = 0; i < n; i++) 
		cin >> ar[i];

	ll cnt = 0, now = 0;
	for (int i = 0; i < n; i++) {
		if (now+ar[i] <= h) {
			now += ar[i];
		} else {
			cnt++;
			now = ar[i];
		}
		cnt += now/k;
		now = now%k;
	}
	cnt += now/k;
	now = now%k;
	cnt += (now > 0);
	cout << cnt;
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

