#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int fi = s[0]-'A', se = s[1]-'A';
	for (int i = 2; i < s.length(); i++) {
		int sum = (fi + se) % 26;
		if (s[i]-'A' != sum) {
			cout << "NO\n";
			return;
		}
		fi = se;
		se = s[i]-'A';
	}
	cout << "YES\n";
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

