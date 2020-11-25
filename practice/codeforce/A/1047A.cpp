#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a;
	cin >> a;
	if (a == 3) {
		cout << "1 1 1";
		return;
	} else if (a == 4) {
		cout << "1 2 1";
		return;
	} else if (a == 5) {
		cout << "1 2 2";
		return;
	}
	if ((a-1-4)%3==0) {
		cout << 1 << " " << 5 << " " << a-1-5 << "\n";
	} else {
		cout << 1 << " " << 4 << " " << a-1-4 << "\n";
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
