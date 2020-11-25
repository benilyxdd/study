#include <bits/stdc++.h>

using namespace std;

#define ll long long
const int MX = (int) 1e6;
bool prime[MX+1];

void sieve() {
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;
	
	for (int i = 2; i*i <= MX; i++) {
		if (prime[i]) {
			for (int j = i*i; j <= MX; j += i) {
				prime[j] = false;
			}
		}
	}
}

void solve() {
	int n;
	cin >> n;
	while(n--) {
		ll xd;
		cin >> xd;
		int yo = sqrt(xd);
		if (prime[yo] && (ll)yo*yo == xd) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	sieve();
	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

