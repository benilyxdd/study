#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= a-i; j++) {
			int k = a-i-j;
			if (i*10000+j*5000+k*1000 == b) {
				cout << i << " " << j << " " << k << "\n";
				return;
			}
		}
	}
	cout << "-1 -1 -1\n";
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

