#include <bits/stdc++.h>
using namespace std;

#define ll long long
bool ar[10];

bool ok(ll n) {
	ll x = n;
	memset(ar, 0, sizeof(ar));
	while(x > 0) {
		int temp = x%10;
		ar[temp] = 1;
		x /= 10;
	}
	for (int i = 1; i < 10; i++) {
		if (ar[i] == 1) {
			if (n%i != 0) {
				return false;
			}
		}
	}
	return true;
}

void solve() {
	ll n;
	cin >> n;
	memset(ar, 0, sizeof(ar));
	for (ll i = n; i < n+2541; i++) {
		if (ok(i)) {
			cout << i << "\n";
			return;
		}
	}
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

