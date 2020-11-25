#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a, b;
	cin >> a >> b;
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	int mx = max(a.length(), b.length());
	for (int i = 0; i < mx; i++) {
		if (b[i] > a[i]) {
			cout << "Yes\n";
			return;
		} else if (a[i] > b[i]) {
			cout << "No\n";
			return;
		}
	}
	cout << "No\n";
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

