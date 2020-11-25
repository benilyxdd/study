#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		for (int j = i+1; j <= b; j++) {
			for (int k = j+1; k <= b; k++) {
				if ((i*i+j*j) == (k*k)) {
					cout << i << " " << j << " " << k << "\n";
				}
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

