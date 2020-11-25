#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(ll n) {
	if (n == 1 || n == 0) 
		return false;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) 
			return false;
	}
	return true;
}

void solve() {
	ll n;
	cin >> n;
	if (prime(n)) {
		cout << n << "\n";
	} else {
		return;
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

