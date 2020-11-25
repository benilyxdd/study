#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int n = s.length();
	string a = s.substr(0,n/2);
	string b = s.substr(n/2);
	int diff = 0;
	reverse(b.begin(), b.end());
	for (int i = 0; i < n/2; i++) {
		if (a[i] != b[i]) {
			diff++;
		}
	}
	if (n%2) {
		cout << (diff <= 1 ? "YES" : "NO") << "\n";
	} else {
		cout << (diff == 1 ? "YES" : "NO") << "\n";
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


