#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	for (int i = 0; i < 26; i++) {
		auto it = find(s.begin(), s.end(), ('a'+i));
		if (it == s.end()) {
			cout << char('a'+i) << "\n";
			return;
		}
	}
	cout << "None\n";
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

