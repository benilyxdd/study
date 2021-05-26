#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int len = s.length();
	if (s.substr(len-2, 2) == "po") {
		cout << "FILIPINO\n";
	} else if (s.substr(len-4, 4) == "masu" || s.substr(len-4, 4) == "desu") {
		cout << "JAPANESE\n";
	} else if (s.substr(len-5, 5) == "mnida") {
		cout << "KOREAN\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
