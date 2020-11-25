#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n; string s; cin >> n >> s;
	int l = (n-11)/2;
	int k = l;
	string x = "";
	for (int i = 0; i < n; i++) {
		if (s[i] == '8') {
			if (l > 0) {
				l--;
			} else {
				x += s[i];
			}
		} else {
			if (k > 0) {
				k--;
			} else {
				x += s[i];
			}
		}
	}
	cout << (x[0] == '8' ? "YES" : "NO") << "\n";
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

