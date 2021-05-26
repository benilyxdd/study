#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	int f2s = 0, s2f = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] == 'F' && a[i-1] == 'S') {
			s2f++;
		}
		if (a[i] == 'S' && a[i-1] == 'F') {
			f2s++;
		}
	}
	cout << (s2f > f2s ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
