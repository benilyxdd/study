#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	string s;
	cin >> s;
	int cnto = 0, cntx = 0;
	for (int i = 0; i < 10; i++) {
		if (s[i] == 'o') {
			cnto++;
		} else if (s[i] == 'x') {
			cntx++;
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

