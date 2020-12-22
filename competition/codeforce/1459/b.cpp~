#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mxN = 1001;
int ar[mxN];

void f1() {
	ar[1] = 4;
	for (int i = 3, j = 2; i < mxN; i+=2, j++) {
		ar[i] = ar[i-2]+4*j;
	}

	for (int i = 2, j = 2; i < mxN; i+=2, j++) {
		ar[i] = j*j;
	}
}

ll f(ll n) {
	return ar[n];
}

void solve() {
	ll n;
	cin >> n;
	ll ans = f(n);
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	f1();
	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i << ": ";
		solve();
		//i++;
	}
	return 0;
}

