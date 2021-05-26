#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i == n) {
			sum += i*i*i;
		} else {
			sum += 2*(i*i*i);
		}
	}
	cout << sum << "\n";
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

