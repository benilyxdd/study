#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int MOD = (int)1e9+7;

void solve() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				int xd = i*10+j;
				int xd2 = k*100+k*10+j;
				if (xd*xd == xd2) 
					if (i != j && j != k && i != k)
						cout << i << " " << j << " " << k << "\n";
			}
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

