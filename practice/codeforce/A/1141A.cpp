#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b;
	cin >> a >> b;
	if (b%a != 0) {
		cout << -1 << "\n";
		return;
	}
	int c = b/a;
	int cnt = 0;
	while(c%2 == 0) {
		cnt++;
		c/=2;
	}
	while(c%3 == 0) {
		cnt++;
		c/=3;
	}
	cout << (c==1 ? cnt : -1) << "\n";
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


