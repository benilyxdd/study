#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	cout << (s[0] == s[1] && s[1] == s[2] || s[1] == s[2] && s[2] == s[3] ? "Yes" : "No");
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

