#include <bits/stdc++.h>
using namespace std;

#define ll long long
int a[200], b[200], c[200];

void solve() {

	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(a));
	memset(c, 0, sizeof(a));

	string x, y, z;
	cin >> x >> y >> z;
	
	for (char& ch : x) {
		a[ch]++;
	}
	for (char& ch : y) {
		b[ch]++;
	}
	for (char& ch : z) {
		c[ch]++;
	}

	bool ok = true;
	for (int i = 0; i < 200; i++) {
		if (a[i] != b[i] || a[i] != c[i]) {
			ok = false;
			break;
		}
	}
	cout << (ok ? "Possible" : "Not Possible") << '\n';
}

int main() {
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

