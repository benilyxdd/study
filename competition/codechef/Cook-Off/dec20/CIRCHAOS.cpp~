#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll

bool prime(int n) {
	if (n == 1 || n == 2) 
		return false;

	for (int i = 2; i*i <= n; i++)
		if (n%i == 0)
			return false;

	return true;
}

void solve() {
	int n, m;
	cin >> n >> m;
	int x = n;
	int ar[m];
	for (int i = 0;	i < m; i++)
		cin >> ar[i];

	if (n == 1) {
		cout << 0 << "\n";
		return;
	}
	for (int i = 0; i < m; i++) {
		if (ar[i] == 1) {
			cout << x-1 << "\n";
			return;
		}	
	}

	int cnt = 0;
	sort(ar, ar+m);
	if (n > ar[0]) {
		int temp = n-ar[0];
		cnt += temp;
		n -= temp;
	}
	for (int i = 0; i < m; i++) {
		if (ar[i] > n) {
			if (prime(ar[i])) {
				cout << x-1 << "\n";
				return;
			} else {
				while(ar[i]%n != 0) {
					n--; cnt++;
					if (n == 0) {
						cout << x-1 << "\n";
						return;
					}
				}
			}
		}
	}
	cout << cnt << "\n";
}

signed main() {
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

