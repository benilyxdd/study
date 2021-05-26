#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n, k;

ll cal(int v) {
	ll t = 1, total = 0;
	while(v/t) {
		total += v/t;
		t *= k;
	}
	return total;
}

void solve() {
	cin >> n >> k;
	for (int i = n-1; i >= 0; i--) {
		ll a = cal(i);
		if (a < n) {
			cout << i+1;
			return;
		}
	}
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

