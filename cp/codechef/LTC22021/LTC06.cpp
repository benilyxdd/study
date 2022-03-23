#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define int ll
const int mxN = 105;
int ar[mxN];

void f() {
	ar[0] = 1;
	ar[1] = 2;
	ar[2] = 3;
	ar[3] = 4;
	for (int i = 4; i < mxN; i++) {
		ar[i] = ar[i-1]+ar[i-3];
	}

}

void solve() {
	int n;
	cin >> n;
	cout << ar[n-1] << '\n';
}

signed main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	f();
	int t = 1, i = 1;
	cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

