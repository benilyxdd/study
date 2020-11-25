#include <bits/stdc++.h>

using namespace std;
#define ll long long


int n;
ll d;
ll N[1001];

bool ok(ll k) {
	for (int i = 0; i < n; i++) {
		if (k%N[i] != 0) {
			k += (N[i] - k%N[i]);
		}
	}
	return k <= d;
}

void solve() {
	cin >> n >> d;
	for (int i = 0 ; i < n; i++) {
		cin >> N[i];
	}

	ll low = 0, high = d;
	while(low < high) {
		ll mid = (low + high + 1) / 2;
		if (ok(mid)) {
			low = mid;
		} else {
			high = mid - 1;
		}
	}
	cout << low << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}
