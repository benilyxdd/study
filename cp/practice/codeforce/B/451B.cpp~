#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int l = -1, r = -1, n; cin >> n;
	int a[n], b[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b+n);
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i-1]) {
			l = i-1;
			break;
		}
	}
	for (int i = n-1; i >= 0; i--) {
		if (a[i-1] > a[i]) {
			r = i;
			break;
		}
	}

	if (l == -1 || r == -1) {
		cout << "yes\n";
		cout << "1 1\n";
		return;
	}

	if (r < l) {
		swap(r, l);
	}
	reverse(a+l, a+r+1);
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			cout << "no\n";
			return;
		}
	}
	cout << "yes\n";
	cout << l+1 << " " << r+1 << "\n";
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

