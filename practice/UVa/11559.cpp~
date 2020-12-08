#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	while(cin >> n) {
		int b, h, w;
		cin >> b >> h >> w;
		int mn = (int)1e9;
		for (int i = 0; i < h; i++) {
			int p;
			cin >> p;
			for (int j = 0; j < w; j++) {
				int a;
				cin >> a;
				if (a >= n) {
					int tot = n*p;
					mn = min(mn, tot);
				}
			}
		}
		if (mn > b) {
			cout << "stay home\n";
		} else {
			cout << mn << "\n";
		}
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


