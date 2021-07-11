#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<int> all = {1};
	int x = 1;
	for (int i = 2; i <= 10; i++) {
		x *= i;
		all.push_back(x);
	}

	int cnt = 0, n;
	cin >> n;
	while (n > 0) {
		for (int i = 9; i >= 0; i--) {
			if (all[i] <= n) {
				cnt++;
				n -= all[i];
				break;
			}
		}
	}
	cout << cnt;
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

