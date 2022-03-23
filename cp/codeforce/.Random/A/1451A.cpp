#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << "0\n";
		return;
	} else if (n == 2) {
		cout << "1\n";
		return;
	} else if (n == 3) {
		cout << "2\n";
		return;
	}
	if (n&1) {
		cout << "3\n"; 
	} else {
		cout << "2\n";
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


