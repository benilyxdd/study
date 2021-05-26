#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			for (int k = 1; k < 10; k++) {
				for (int l = 1; l < 10; l++) {
					if (i+j == r1 && k+l == r2 && i+k == c1 && j+l == c2 && i+l == d1 && j+k == d2) {
						if (i != j && i != k && i != l && j != k && j != l && k != l) {
							cout << i << " " << j << "\n" << k << " " << l;
							return;
						}
					}
				}
			}
		}
	}
	cout << "-1";
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


