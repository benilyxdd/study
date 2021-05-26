#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s, s1;
	cin >> s >> s1;
	reverse(s1.begin(), s1.end());
	if (s == s1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
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

