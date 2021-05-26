#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int as = 0;
	int bs = 0;
	while(a > 0) {
		as += a%10;
		a /= 10;
	}
	while(b > 0) {
		bs += b%10;
		b /= 10;
	}
	cout << max(as, bs) ;
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

