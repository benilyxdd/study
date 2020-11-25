#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll ans, n;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (ll i = 1; i*i <= n; i++) {
		if (n%i == 0) {
			ans+=2;
			if (i*i == n) {
				ans--;
			}
		}
	}
	cout << ans  << "\n";
}
