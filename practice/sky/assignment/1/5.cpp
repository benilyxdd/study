#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		bool t = false;
		if (n%i == 0) {
			t = true;
		}
		for (int j = 2; j < i; j++) {
			if (i%j == 0) {
				t = true;
				break;
			}
		}
		if (t == false) {
			cnt++;
		}
	}
	cout << cnt << "\n";
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

