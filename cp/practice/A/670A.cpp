#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	if (n%7 == 0) {
		cout << n/7*2 << " " << n/7*2 << "\n";
	} else if (n%7 == 1) {
		cout << n/7*2 << " " << n/7*2+1 << "\n";
	} else if (n%7 > 1 && n%7 < 6) {
		cout << n/7*2 << " " << n/7*2+2 << "\n";
	} else {
		cout << n/7*2+1 << " " << n/7*2+2 << "\n";
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


