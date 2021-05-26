#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = (int)1e4+4;
ll ar[mxN];

void f() {
	ar[0] = 0;
	for (int i = 1; i < mxN; i++) {
		ar[i] = ar[i-1]+i*i;
	}
}

void solve() {
	int n;
	cin >> n;
	cout << ar[n-1] << "\n";
}

int main() {
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

