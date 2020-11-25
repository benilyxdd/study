#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a[7];
	memset(a, 0, sizeof(a));
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < 7; j++) {
			a[j] += s[j]-'0';
		}
	}
	int mx = 0;
	for (int& x : a) {
		mx = max(mx, x);
	}
	cout << mx << "\n";
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

