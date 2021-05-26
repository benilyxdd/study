#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n, a;
	string s;
	cin >> n >> a >> s;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == '*') {
			int temp = 0;
			while (s[i] == '*') {
				i++;
				temp++;
			}
			mx = max(mx, temp);
		}
	}
	cout << (mx < a ? "NO" : "YES") << '\n';
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

