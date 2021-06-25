#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	vector<array<int, 2>> ar(4, array<int, 2>());
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> ar[i][j];
		}
	}

	int a = ar[3][1] - ar[3][0];
	int b = ar[2][1] - ar[2][0];
	int c = ar[1][1] - ar[1][0];

	cout << a + b + c << '\n' << a + b << '\n' << a << '\n';
}

int main() {
	freopen("promote.in", "r", stdin);
	freopen("promote.out", "w", stdout);
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

