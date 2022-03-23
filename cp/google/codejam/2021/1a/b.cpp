#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

map<int, int> primeFact(int n) {
	map<int, int> res;
	while (n % 2 == 0) {
		res[2]++;
		n /= 2;
	}

	for (int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			res[i]++;
			n /= i;
		}
	}

	if (n > 2) {
		res[n]++;
	}

	return res;
}

void solve() {
	int n;
	cin >> n;
	
	map<int, int> m;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		m[a] = b;
		sum += a * b;
	}

	for (int i = 1; i < sum; i++) {
		int left = sum - i;
		map<int, int> temp = primeFact(left);
		bool ok = true;
		int msum = 0;
		for (pair<const int, int> p : temp) {
			msum += p.first * p.second;
			if (m[p.first] < p.second) {
				ok = false;
				break;
			}
		}
		// cout << i << ": sum = " << msum << ' ' << "ok: " << ok << '\n';
		if (ok && msum == i) {
			cout << left << '\n';
			return;
		}
	}
	cout << 0 << '\n';
}

signed main() {
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

