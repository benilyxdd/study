#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int t = (a*c+b-1)/b;
	for (int i = 0; i <= t; i++) {
		int le = t*b;
		int ca = (t-i)*a;
		if (ca <= le) {
			cout << i;
			return;
		}
	}
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


