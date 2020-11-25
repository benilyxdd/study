#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool vowel(char c) {
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
		return true;
	} else {
		return false;
	}
}

void solve() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (!vowel(s[i]) && !vowel(s[i+1]) && s[i] != 'n') {
			cout << "NO\n";
			return;
		}
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


