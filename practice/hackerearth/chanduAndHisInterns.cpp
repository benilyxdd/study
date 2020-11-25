#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 1; i <= n/2; i++) {
		if (n%i == 0) {
			cnt+=2;
			if (cnt == 4) {
				break;
			}
		}
	}
	cout << (cnt < 4 ? "NO" : "YES") << "\n";
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

