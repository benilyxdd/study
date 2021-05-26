#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; cin >> n;
	int a[n];
	bool b[n];
	memset(b, false, sizeof(b));
	for (int i = 0;i < n; i++) cin >> a[i];
	if (n == 2) {
		cout << a[0] << " " << a[1] << "\n";
		return;
	}

	int mx = *max_element(a, a+n);
	for (int i = 1; i*i <= mx; i++) {
		if (mx%i == 0) {
			int xd = i;
			int xd2 = mx/i;
			for (int j = 0; j < n; j++) {
				if (b[j] == false && a[j] == xd) {
					b[j] = true;
					break;
				}
			}
			if (xd != xd2) {
				for (int j = 0; j < n; j++) {
					if (b[j] == false && a[j] == xd2) {
						b[j] = true;
						break;
					}
				}
			}
		}
	}
	cout << mx << " ";
	int mx2 = 0;
	for (int i = 0; i < n; i++) {
		if (b[i] == false) {
			mx2 = max(a[i], mx2);
		}
	}
	cout << mx2 << "\n";
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

