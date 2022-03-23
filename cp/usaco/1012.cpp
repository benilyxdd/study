#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	string a, b;
	cin >> n >> a >> b;

	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != b[i]) {
			cnt++;
			while (a[i] != b[i] && i < n) {
				i++;
			}
		}
	}
	cout << cnt << '\n';
}

int main() {
	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);
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

