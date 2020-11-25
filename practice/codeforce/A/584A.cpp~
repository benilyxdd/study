#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	string b;
	cin >> a >> b;
	string s;
	if (b == "10" && a < 2) {
		cout << -1 << "\n";
		return;
	}
	if (b == "10") {
		s += '1';
		for (int i = 0; i < a-1; i++) {
			s += '0';
		}
	} else {
		while(a--) {
			s += b;
		}
	}

	cout << s << "\n";
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


