#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool prime(int n) {
	if (n == 1) return false;
	for (int i = 2; i*i <= n; i++) {
		if (n%i == 0) return false;
	}
	return true;
}

void solve() {
	int n; cin >> n;
	cout << (prime(n) ? "yes" : "no") << "\n";
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

