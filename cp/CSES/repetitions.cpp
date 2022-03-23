#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s; cin >> s;
	int mx = 1, temp = 1;
	int len = s.length();
	char x = s[0];
	for (int i = 1; i < len; i++) {
		if (s[i] == x) {
			temp++;
			mx = max(temp, mx);	
		} else {
			temp = 1;
		}
		x = s[i];
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

