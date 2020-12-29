#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	if (s == "1" || s == "4" || s == "78") {
		cout << "+\n";
	} else {
		string a = s.substr(s.length()-2, 2);
		string b = s.substr(0, 3);
		if (a == "35") {
			cout << "-\n";
			return;
		}
		if (b == "190") {
			cout << "?\n";
			return;
		}
		cout << "*\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}


