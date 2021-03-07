//https://www.geeksforgeeks.org/bell-numbers-number-of-ways-to-partition-a-set/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 100;
int ar[mxN][mxN];

void f() {
	ar[0][0] = 1;
	for (int i = 1; i < mxN; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0) {
				ar[i][j] = ar[i-1][i-1];
			} else {
				ar[i][j] = ar[i-1][j-1]+ar[i][j-1];
			}
		}
	}
}

void solve() {
	int n;
	cin >> n;
	cout << ar[n][0];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	f();
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

