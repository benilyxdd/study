#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int ab = 0, aa = 0, bb = 0, ba = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			ab++;
		} else if (s[i] == ')') {
			ab--;
		} else if (s[i] == '[') {
			bb++;
		} else if (s[i] == ']') {
			bb--;
		}
		if (ab == -1) {
			aa++;
			ab++;
		}
		if (bb == -1) {
			ba++;
			bb++;
		}
	}
	cout << (s.length()-(ab+aa+ba+bb))/2 << "\n";
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

