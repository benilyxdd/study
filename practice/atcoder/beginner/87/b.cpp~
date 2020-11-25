#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c, n;
	int cnt = 0;
	cin >> a >> b >> c >> n;
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (i*500 + j*100 + k*50 == n) {
					cnt++;
				}
			}
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

