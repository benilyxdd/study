#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	string a;
	cin >> a;
	if (a == "a8" || a == "h8" || a == "h1" || a == "a1") {
		cout << 3 << "\n";
	} else if (a[1] == '8' || a[1] == '1' || a[0] == 'a' || a[0] == 'h') {
		cout << 5 << "\n";
	} else {
		cout << 8 << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
