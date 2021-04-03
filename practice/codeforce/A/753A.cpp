#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;

	int x = 1;
	while (x*(x+1)/2 <= n) {
		x++;
	}
	x--;
	cout << x << '\n';
	for (int i = 1; i < x; i++) {
		cout << i << ' ';
	}
	cout << x + (n - x * (x + 1) /2) << '\n';
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


