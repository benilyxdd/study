#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int sum = 0;
	for (int i = 1; i < 1000; i++) {
		if (i%3 == 0) {
			sum += i;
		} else if (i%5 == 0) {
			sum += i;
		}
	}
	cout << sum << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}
	return 0;
}

