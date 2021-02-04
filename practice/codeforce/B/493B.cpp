#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string a, b;
	int n;
	cin >> n;
	bool ar[n];
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s[0] == '-') {
			b += s[1];
			ar[i] = 1;
		} else {
			a += s;
		}
	}

	for (int i = 0; i < min(a.length(), b.length()); i++) {
		if (a[i] > b[i]) {
			cout << "first";
			return;
		} else if (b[i] > a[i]) {
			cout << "second";
			return;
		}
	}
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

