#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string s;
	getline(cin, s);
	if (s[5] == 'w') {
		if (s[0]-'0' < 5 || s[0]-'0' == 7) {
			cout << 52 << "\n";
		} else {
			cout << 53 << "\n";
		}
	} else {
		string xd = s.substr(0, 2);
		if (xd == "31") {
			cout << 7 << "\n";
		} else if (xd == "30"){
			cout << 11 << "\n";
		} else {
			cout << 12 << "\n";
		}
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


