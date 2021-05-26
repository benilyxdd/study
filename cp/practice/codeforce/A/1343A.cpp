#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	for (int i = 2; i < 30; i++) {
		int xdd = 1*pow(2, i)-1;
		if (n%xdd == 0) {
			cout << n/xdd << "\n";
			break;
		}
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


