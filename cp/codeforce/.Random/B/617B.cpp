#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 101;
int ar[mxN], n;

void solve() {
	cin >> n;
	bool ok = 0;
	for (int i = 0; i < n; i++) {
		cin >> ar[i];
		if (ar[i] == 1) {
			ok = 1;
		}
	}
	if (!ok) {
		cout << "0\n";
		return;
	}

	ll ans = 1, temp = 1;
	for (int i = 0; i < n; i++) {
		if (ar[i] == 1) {
			int x = 1;
			while(ar[i+1] == 0 && i < n-1) {
				i++, x++;
			}
			ans *= x;
			temp = x;
		}
	}
	cout << ans/temp;
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

