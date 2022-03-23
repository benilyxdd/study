#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	
	int x = n-3+log(n)+1;
	cout << x << "\n";
	for (int i = 3; i < n; i++) {
		cout << i << " " << n << "\n";
	}
	for (int i = 0; i < x-n+3; i++) {
		cout << n << " " << 2 << "\n";
	}
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


