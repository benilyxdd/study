#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	if(c >= b && c <= a) {
		cout << b << "\n";
	} else if (c < b) {
		cout << c << "\n";
	} else if (c > b && c > a) {
		cout << b - (c - a) << "\n";
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
