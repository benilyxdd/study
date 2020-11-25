#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int prime[] = {1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
	ll ways[51] = {1, 1, 2};
	
	for (int i = 3; i <= n; i++) {
		ll push = 0;
		for (int j = 0; j < 16; j++) {
			if (i >= prime[j]) {
				int xd = i - prime[j];
				push += ways[xd];
			}
		}
		ways[i] = push;
	}
	cout << ways[n] << "\n";
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
