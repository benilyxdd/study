#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int cnt = 0;
	while(b != d) {
		if (cnt > 1000) {
			cout << -1;
			return;
		}
		if (b > d) {
			d+=c;
		}
		if (d > b) {
			b+=a;
		}
		cnt++;
	}
	cout << b << "\n";
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


