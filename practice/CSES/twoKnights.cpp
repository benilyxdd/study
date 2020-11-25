#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		ll a = i*i;
		ll b = a*(a-1)/2;
		if (i < 3) {
			cout << b << "\n";
		} else {
			cout << b-4*(i-2)*(i-1) << "\n";
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

