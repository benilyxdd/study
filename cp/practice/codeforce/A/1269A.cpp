#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	cin >> a;
	if(a % 2 == 0) {
		cout << 8+a << " " << 8 << "\n";
	} else {
		cout << 9+a << " " << 9 << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t = 1, i = 1;
	//cin >> t;
	while(t--) {
		//cout << "Case #" << i < ": ";
		solve();
		//i++;
	}
	return 0;
}
