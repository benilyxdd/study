//https://www.geeksforgeeks.org/maximum-sum-2-x-n-grid-no-two-elements-adjacent/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e5;
int ar[2][mxN], n;

void input() {
	cin >> n;
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < n; j++)
			cin >> ar[i][j];
}

int f() {
	int incl = max(ar[0][0], ar[1][0]);
	int excl = 0, ne = 0;
	for (int i = 1; i < n ; i++) {
		ne = max(incl, excl);
		incl = excl + max(ar[0][i], ar[1][i]);

		excl = ne;
	}

	return max(incl, excl);
}

void solve() {
	input();
	cout << f();
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

