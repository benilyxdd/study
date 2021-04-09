#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;

	int n = s.length(), mn = (int)1e9;
	for (int i = 0; i < n; i++) {	
		if (i == 0) {
			cout << "Mike\n";
			mn = min(mn, (int)s[i]);
			continue;
		}
		if (s[i] > mn) {
			cout << "Ann\n";
		} else {
			cout << "Mike\n";
		}
		mn = min(mn, (int)s[i]);
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

