#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, k;
	string s;
	cin >> n >> k >> s;
	
	int t = 0;
	for (int i = 0; i < n/2; i++) {
		if (s[i] != s[n-i-1]) {
			t++;
		}
	}

	cout << abs(k-t) << '\n';
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

