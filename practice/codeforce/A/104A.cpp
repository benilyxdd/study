#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int n;
	cin >> n;
	int a = n-10;
	if (a < 1 || a > 11) {
		cout << 0 << "\n";
	} else if (a == 1){
		cout << 4 << "\n";
	} else if (a > 1 && a < 10) {
		cout << 4 << "\n";
	} else if (a == 10) {
		cout << 15 << "\n";
	} else if (a == 11) {
		cout << 4 << "\n";
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
