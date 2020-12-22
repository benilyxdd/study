#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	int mn = min(a, b);

	int a_s = 0, b_s = 0;
	if (a == 0) {
		b_s = b;
	} else if (b == 0) {
		a_s = a;
	}
	
	if (a > b) {
		a_s += a-b+1;
	} else if (b > a) {
		b_s += b-a+1;
	} else {

	}
	while(true) {

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

