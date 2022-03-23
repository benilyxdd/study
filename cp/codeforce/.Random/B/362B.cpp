#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 3001;
int ar[mxN], n, m;

void solve() {
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> ar[i];
	sort(ar, ar+m);
	

	for (int i = 0; i < m; i++) {
		if (ar[i] == n || ar[i] == 1) {
			cout << "NO\n";
			return;
		}
	}

	if (m < 3) {
		cout << "YES\n";
		return;
	}

	for (int i = 2; i < m; i++) {
		if (ar[i] == ar[i-1]+1 && ar[i-1] == ar[i-2]+1) {
			if (ar[i] <= n && ar[i-1] <= n && ar[i-2] <= n) {
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
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

